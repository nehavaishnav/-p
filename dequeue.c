#include<stdio.h>
int front=-1;
int rear=-1;
#define size 5

int queue[size];
//insertion at front
void insertfromfront(int val){
    if(front==-1&&rear==-1){
        front =0 ;
        rear=0;
        queue[front]=val;


    }
    if(front==0){
        front=size-1;
        queue[front]=val;
    }
    else{
        front=front-1;
        queue[front]=val;
    }
    
}
void display()
{
  
    printf("Queue elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % size;
    }
 
    printf("%d\n", queue[rear]);
}

int main(){
    insertfromfront(3);

}