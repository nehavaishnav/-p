import pandas as pd
from sklearn.model_selection import train_test_split, GridSearchCV, cross_val_score
from sklearn.ensemble import RandomForestRegressor
from sklearn.metrics import mean_squared_error, r2_score
import matplotlib.pyplot as plt

# Load the dataset
data = pd.read_csv('peak load dataset for sih(peak load dataset for sih).csv')  # Replace with the actual CSV file path

# Display the first few rows to understand the structure
print(data.head())

# Separate features (X) and the target variable (y)
X = data[['Day', 'Month', 'Temp(Max) (IN C)', 'Temp(Min)', 'Temp(Avg)',
          'Humidity(%)', 'Precipitation(MM)', 'Wind Speed(mph)', 'Public Holidays']]
y = data['Peak Load']

# Split the data into training and testing sets (80% train, 20% test)
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Define the parameter grid for Grid Search
param_grid = {
    'n_estimators': [100, 200, 300],
    'max_features': ['auto', 'sqrt', 'log2'],
    'max_depth': [None, 10, 20, 30],
    'min_samples_split': [2, 5, 10],
    'min_samples_leaf': [1, 2, 4]
}

# Initialize and perform Grid Search
model = RandomForestRegressor(random_state=42)
grid_search = GridSearchCV(estimator=model, param_grid=param_grid, cv=5, scoring='neg_mean_squared_error', n_jobs=-1, verbose=2)
grid_search.fit(X_train, y_train)

# Best parameters from Grid Search
print(f'Best Parameters: {grid_search.best_params_}')

# Train the model with the best parameters
best_model = grid_search.best_estimator_
y_pred = best_model.predict(X_test)

# Calculate Mean Squared Error and R² Score
mse = mean_squared_error(y_test, y_pred)
r2 = r2_score(y_test, y_pred)

print(f'Mean Squared Error: {mse}')
print(f'R² Score: {r2}')

# Create a DataFrame for comparison
comparison = pd.DataFrame({'Actual': y_test, 'Predicted': y_pred})

# Calculate the difference (error)
comparison['Error'] = comparison['Actual'] - comparison['Predicted']

# Calculate the mean of the errors
average_error = comparison['Error'].mean()
print(f'Average Error: {average_error}')

# Calculate the absolute errors
comparison['Absolute Error'] = comparison['Error'].abs()

# Calculate the Mean Absolute Error (MAE)
mean_absolute_error = comparison['Absolute Error'].mean()
print(f'Mean Absolute Error: {mean_absolute_error}')

# Perform cross-validation
cv_scores = cross_val_score(best_model, X, y, cv=5, scoring='neg_mean_squared_error')
print(f'Cross-Validated Scores: {-cv_scores.mean()}')

# Display the first few rows of the comparison
print(comparison.head())

# Save the predictions and errors to a CSV file
comparison.to_csv('predictions_with_errors_rf.csv', index=False)

# Visualize the actual vs predicted values
plt.figure(figsize=(12, 6))
plt.subplot(1, 2, 1)
plt.plot(y_test.values, label='Actual', color='blue')
plt.plot(y_pred, label='Predicted', color='red')
plt.title('Actual vs Predicted Peak Load')
plt.xlabel('Sample Index')
plt.ylabel('Peak Load')
plt.legend()

# Visualize the residuals (errors)
plt.subplot(1, 2, 2)
plt.scatter(range(len(comparison)), comparison['Error'], color='purple')
plt.axhline(y=0, color='black', linestyle='--')
plt.title('Residuals (Errors)')
plt.xlabel('Sample Index')
plt.ylabel('Error (Actual - Predicted)')

plt.tight_layout()
plt.show()
