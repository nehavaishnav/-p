#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct 
createNode(int data){
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    {
        if(!newnode){
            printf("overflow")
        }
        return newnode
    };

    void show(){
        struct Node*temp= head;
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;}

        }
while(temp!=NULL )
printf()
}