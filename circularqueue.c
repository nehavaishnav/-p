#include<stdio.h>
int rear=-1;
#define size 5
int front=-1;
int queue[size];
int isFull()
{
 
    return (rear + 1) % size == front;
}
int isEmpty()
{
    return front == -1;
}
void enqueue(int data)
{
   
    if (isFull()) {
        printf("Queue overflow\n");
        return;
    }
    
    if (front == -1) {
        front = 0;
    }
    
    rear = (rear + 1) % size;
    queue[rear] = data;
    printf("Element %d inserted\n", data);
}

void display()
{
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
  
    printf("Queue elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % size;
    }
 
    printf("%d\n", queue[rear]);
}

// for (i=front;i!=rear;i=(i+1)%size)
// {
//     printf("%d",queue[i]);
// }

int dequeue()
{
    
    if (isEmpty()) {
        printf("Queue underflow\n");
        return -1;
    }
    if(front==rear){
    int delele=queue[front];
    front=-1;
    rear=-1;
    return delele;}
    else{
        int delele=queue[front];
        front=(front+1)%size;
    }

    
}


int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
     enqueue(4);
      enqueue(5);
    int d=dequeue();
    printf("%d",d);

    display();


}
//Implementa linear queue usinhh single linked list