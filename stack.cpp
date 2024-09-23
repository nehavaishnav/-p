// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     // creation of a stack 
//     stack<int> s;
//     // push operation 
//     s.push(2);
//     s.push(3);
    
//     //pop
//     s.pop();
     
//     cout<< "Printinng top elememt "<<s.top() <<endl;
//     if (s.empty()){

//         cout<<"stack is empty" << endl;
//     }
//     else{
//         cout<<" stack is not empty"<< endl;
//     }
//     cout<<"size of stack is " <<s.size()<< endl;
     
//      return 0;
    

// }
#include<iostream>
#include<stack>
using namespace std;
class Stack{
    //proerties
    public:
    int *arr;
    int top;
    int size;
    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    };
    void push(int elememt){

    };
    void pop()
    {

    };
