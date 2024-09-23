//every non zero value is true in c
#include<stdio.h>
#include<stdlib.h>
int *stack;
int top=-1;                        
int size=0;//global variable
int i;


void createStack(int iniSize) {
    size = iniSize;
    stack = (int*)malloc(size * sizeof(int));

    if (!stack) {
        printf("Memory is not allocated\n");
        exit(1);  // Exit with error code 1
    } else {
        printf("Memory successfully allocated\n");
    }
}

int isFull() {
    return (top == size - 1);
}

void resizeStack(){
    printf("resize memeory\n");
    size=size*2;
    stack=(int*)realloc(stack,size*sizeof(int));
    
    }
void push(int val){
    if(isFull()){
        printf("Stack is overflow\n");
               resizeStack();
    }
    stack[++top] = val;
  
}

    

void show() {
    for (int i = 0; i <= top; i++) { 
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int isEmpty() {
    return (top == -1);
}


int pop() {
    if (isEmpty()) {
        printf("Stack is underflow\n");
        
        return -1;  
    }
    return stack[top--];  
}
//  if(!0){ 
//   printf("A");}
//   else {
//     printf("B");
//   } output is true fir if statement as it is non zero


int main(){
    createStack(2);
    show();
    push(10);
    show();
    push(20);
    show();
    push(30);
  show();
  pop();
  show();
  freestack();
  return 0;
}

