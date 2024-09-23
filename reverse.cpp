#include<iostream>
using namespace std;

#include<stack>

stack<int> s;
class node{
    public:
     int data;
     node * next;
    node (int d){
      this->data-d;
      this->next=NULL;
    }


};
void insertEnd(node *&tail,int data){
    node *newnode= new node(d);

}