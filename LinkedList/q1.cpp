#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
struct node*createNode(int data){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if(!newNode){
        printf("overflow");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert_beg(int data){
    struct node *newNode =createNode(data);
    newNode->next = head;
    head = newNode;
}

void show(){
    struct node *temp = head;
    while(temp!=NULL){
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}

void reverse(){
    struct node *prev, *curr, *next;
    prev = NULL;
    curr = head;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}


int main(){
    head = createNode(10);//first node is created
    insert_beg(20);
    insert_beg(30);
    insert_beg(40);
    show();
    reverse();
    printf("\nreverse");
    show();

    return 0;
}