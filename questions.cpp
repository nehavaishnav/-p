//Code to shift the elements of an array and insert new element at first position
// #include<iostream>
// int main(){
// int maxsize=10;
// int arr[maxsize];
// int val;
// int currentsize=5;
// printf("Enter the elements of the array");

// for(int i=0;i<currentsize;i++){
//     scanf("%d",&arr[i]);
// }
// printf("Enter new value");
// scanf("%d",&val);
// for(int i=currentsize;i>0;i--){
//     arr[i]=arr[i-1];
// }
// arr[0]=val;
// currentsize++;

// for(int i=0;i<currentsize;i++){
//     printf("%d",arr[i]);}
// }

//Code to push an element at the end

// #include<iostream>
// using namespace std;
// int max_size,stack[max_size],top=-1;
// bool isfull(){
//     if (top==max_size-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }

// }
// void push(int value) {
//     if (isfull()){
//         cout<<"stack overflow"<<endl;
//     } else {
//         top++;
//         stack[top] = value;
//         std::cout << value << " pushed onto stack." << std::endl;
//     }
// }


// int main()
// {
//     int i,size;
//     cin>>size;
    
// for(i=0;i<size;i++){
//     cin>>stack[i];

// }
// push(10);

//         cout << "Stack after push: ";
//     for (i = 0; i < top; i++) {
//         cout << stack[i] << " "<<endl;
//         top++;
//     }
//     cout << endl;

//     return 0;

// }


// #include<iostream>
// using namespace std;
// int max_size,stack[max_size],top=-1;
// bool isfull(){
//     if (top==max_size-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }

// }
// void push(int value) {
//     if (isfull()){
//         cout<<"stack overflow"<<endl;
//     } else {
//         top++;
//         stack[top] = value;
//         std::cout << value << " pushed onto stack." << std::endl;
//     }
// }


// int main()
// {
//     int i,size;
//     cin>>size;
    
// for(i=0;i<size;i++){
//     cin>>stack[i];

// }
// push(10);

//         cout << "Stack after push: ";
//     for (i = 0; i < top; i++) {
//         cout << stack[i] << " "<<endl;
//         top++;
//     }
//     cout << endl;

//     return 0;

// }


// #include <iostream>
// using namespace std;

// int *stack;  // Pointer for dynamically allocated stack array
// int top = -1;
// int Max;  // Size of the stack, determined at runtime

// bool isfull() {
//     return top == Max - 1;
// }

// bool isempty() {
//     return top == -1;
// }

// void push(int value) {
//     if (isfull()) {
//         cout << "Stack overflow" << endl;
//     } else {
//         top++;
//         stack[top] = value;
//         cout << value << " pushed onto stack." << endl;
//     }
// }

// int pop() {
//     if (isempty()) {
//         cout << "Stack underflow" << endl;
//         return -1;  // Return -1 to indicate underflow
//     } else {
//         int value = stack[top];
//         top--;  // Decrement top to remove the top element
//         return value;
//     }
// }

// int main() {
//     cout << "Enter the size of the stack: ";
//     cin >> Max;

//     stack = new int[Max];  // Dynamically allocate the array based on user input

//     int n, value;
//     cout << "Enter the number of elements to push: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << "Enter value to push: ";
//         cin >> value;
//         push(value);
//     }

//     cout << "Stack after push: ";
//     for (int i = 0; i <= top; i++) {
//         cout << stack[i] << " ";
//     }
//     cout << endl;

//     int poppedValue = pop();
//     if (poppedValue != -1) {
//         cout << poppedValue << " popped from stack." << endl;
//     }

//     cout << "Stack after pop: ";
//     for (int i = 0; i <= top; i++) {
//         cout << stack[i] << " ";
//     }
//     cout << endl;

//     delete[] stack;  // Free the allocated memory
//     return 0;
// }
#include<stdio.h>
void address2D(int arr2[2][3]){
    int baseaddress=1000;
    int element_size=sizeof(int);
    int rowmajor;
    int coloumnmajor;
    //int *base2;
   // base2=arr2;
    //printf("%u", baseaddress);
    //printf("\n%u",baseaddress+1);
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            
            rowmajor=baseaddress+(i*3+j)*element_size;
            coloumnmajor=baseaddress+(i+j*2)*element_size;
           
            printf("Address of index: arr2[%d %d]:",i,j);
             printf("\n Row Major Address %d",rowmajor);
               printf("\n Row Major Address %d",coloumnmajor);
      
    }}
    }void address3D(int arr2[2][3][4]){
    int baseaddress=1000;
    int element_size=sizeof(int);
    int rowmajor;
    int coloumnmajor;
    //int *base2;
   // base2=arr2;
    //printf("%u", baseaddress);
    //printf("\n%u",baseaddress+1);
    int i1,i2,i3;
    for(i1=0;i1<2;i1++){
        for(i2=0;i2<3;i2++){
             for(i3=0;i3<4;i3++){
                      rowmajor=baseaddress+((i1*3*4)+(i2*4)+(i3))*element_size;
            coloumnmajor=baseaddress+((i3*2*3)+(i2*2)+i1)*element_size;
           
            printf("Address of index: arr2[%d %d %d]:",i1,i2,i3);
             printf("\n Row Major Address %d",rowmajor);
               printf("\n Coloumn Major Address %d",coloumnmajor);
      

             }
           
           
      
    }}}



int main()

{ 
 
    int arr2[2][3]={0};
    int arr3[2][3][4]={0};
    int arr4[2][3][4][5]={0};
      int address3D(arr2[2][3]);
      address2D(arr2);
   
   
    
 



}