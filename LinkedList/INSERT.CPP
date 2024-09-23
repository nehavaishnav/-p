#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

//program to create a new node

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
// insert at beginning 
void insert_beg(int data){
    struct node *newNode =createNode(data);
    newNode->next = head;
    head = newNode;
}
// insert at the end
void insertend(int data){
struct node *newNode =createNode(data);
if(head==NULL){
newNode->next=NULL;
head=newNode;}
struct node*temp;
temp=head;
while(temp->next!=NULL){
    temp=temp->next;

}
temp->next=newNode;
newNode->next=NULL;
}

// program to show
void show(){
    struct node *temp = head;
    while(temp!=NULL){
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}
//reverse the linked list 
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
//
void specific_insert(int data){
    int loc;
    struct node* newNode=createNode(data);
     struct node* temp=head;
    
     
    if (!newNode){
        printf("overflow");
        return;}

    printf("enter the location");
        scanf("%d",&loc);
        if (loc==1){
            newNode->next=head;
            head=newNode;
            return;
        }

        for(int i=1;i<loc-1;i++){
                   if (temp == NULL) {
            printf("Can't insert, location out of bounds\n");
            return;
        }
          temp=temp->next;
        }
if(temp==NULL){

            printf("cant insert");\
        }
        else{
        newNode->next=temp->next;
        temp->next=newNode;
    }}

    
// Function to search for a specific value in the linked list
int search(int value) {
    struct node *temp = head; // Start from the head
    int position = 0;         // Variable to track the position of the node
    
    while (temp != NULL) {
        if (temp->data == value) {
            return position;  // Value found, return the position
        }
        temp = temp->next;    // Move to the next node
        position++;           // Update position
    }
    
    return -1; // Value not found, return -1
}

void delete_beg() {
    if (head == NULL) {
        printf("List is empty, cannot delete\n");
        return;
    }
    struct node *temp = head;
    head = temp->next;  // Move head to the next node
    free(temp);         // Free the old head node
    printf("Node deleted from the beginning\n");
}

// Delete from the end
void delete_end() {
    if (head == NULL) {
        printf("List is empty, cannot delete\n");
        return;
    }

    if (head->next == NULL) {
        free(head);      // Only one node in the list
        head = NULL;
    } else {
        struct node *temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next); // Free the last node
        temp->next = NULL; // Set the second-to-last node's next to NULL
    }
    printf("Node deleted from the end\n");
}

// Delete from a specific position
void delete_pos(int pos) {
    if (head == NULL) {
        printf("List is empty, cannot delete\n");
        return;
    }

    struct node *temp = head;

    // If position is 0, delete the first node
    if (pos == 0) {
        head = head->next;
       free(temp);
        printf("Node deleted at position %d\n", pos);
        return;
    }
}

//main function
int main(){
    head = createNode(10);//first node is created
    insert_beg(20);
    insert_beg(30);
    insert_beg(40);
    show();
    reverse();
    printf("\nreverse");
    show();
    printf("\n");
insertend(30);
show();
specific_insert(4);
show();

    int value_to_search ;
printf("\nenter the value to be searched");
   scanf("%d",&value_to_search);
    int result = search(value_to_search);
    
    if (result != -1) {
        printf("Value %d found at position %d\n", value_to_search, result);
    } else {
        printf("Value %d not found in the list\n", value_to_search);
    }
    delete_end();
    show();
delete_beg();
show();
    return 0;
}