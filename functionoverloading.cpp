//Function overloading is a process to make more than one function with the same name but different parameters, numbers, or sequence.

#include<iostream>
using namespace std;

  int sum(float a , int b)
  {
   cout<<"Using function with 2 arguements"<<endl;
    return a+b;
    }

int sum(int a, int b, int c){
 cout<<"Using funuction with 3 arguements"<<endl;
 return a+b+c;
}
int main() {
    cout << sum(1.5, 2) << endl;    // Calls the 2-argument version
    cout << sum(1, 2, 3) << endl;   // Calls the 3-argument version
    return 0;
}