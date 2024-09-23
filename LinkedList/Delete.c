#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to create a new node
struct Node *createNode(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at the beginning
void insert_beg(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        // If list is empty, make newNode point to itself (circular list)
        head = newNode;
        newNode->next = head;
    } else {
        // Insert newNode at the beginning and maintain circular nature
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
}

// Function to delete from the beginning
void del_beg() {
    if (head == NULL) {
        // List is empty, nothing to delete
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = head;
    if (head->next == head) {
        // If there's only one node
        head = NULL;
        free(temp);
    } else {
        // Delete the head node and maintain circular nature
        struct Node* last = head;
        while (last->next != head) {
            last = last->next;
        }
        last->next = head->next;
        head = head->next;
        free(temp);
    }
}

// Function to display the list
void show() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = head;
    do {
        printf(" %d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    insert_beg(30);
    insert_beg(40);
    insert_beg(50);
    show();
    del_beg();
    show();
}
