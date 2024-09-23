//C program to insert the node of the beginning of Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int data)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct Node* insertAtFront(struct Node* head, int data)
{
    struct Node* newnode=createNode(data);
    newnode->next=head;
    return newnode;

}
void printList(struct Node* head)
{
    struct Node* curr=head;
    while(curr !=NULL)
    {
    printf("%d",curr->data);
    curr=curr->next;
    };
    printf("\n");  
}

int main(){
    struct Node*head=createNode(2);
    head->next=createNode(3);
    head->next->next=createNode(4);
    head->next->next->next=createNode(5);
    
    printf("original linked list:"){
        printList(head);

    }}