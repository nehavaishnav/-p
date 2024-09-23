#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c);
            } else {
                if (stk.empty()) {
                    return false;
                }
                char top = stk.top();
                stk.pop();

                if (c == ')' && top != '(') {
                    return false;
                }
                if (c == ']' && top != '[') {
                    return false;
                }
                if (c == '}' && top != '{') {
                    return false;
                }
            }
        }

        return stk.empty();
    }
};

int main() {
    Solution sol;
    string input;

    cout << "Enter a string of parentheses: ";
    cin >> input;  // Read user input

    cout << "The string is " << (sol.isValid(input) ? "Valid" : "Invalid") << endl;

    return 0;
}
