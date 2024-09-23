//reversing a linked list
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* reverseList(struct Node* head) {
struct Node *curr = head, *prev = NULL, *next;
   while (curr != NULL) {

        
        next = curr->next;

        
        curr->next = prev;

        
        prev = curr;
        curr = next;
    }}
    
struct Node* createNode(int data)
 {
    struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    //new_node->next = NULL;
    return new_node;
};

void print(struct Node* node) {
    while (node != NULL) {
        printf(" %d", node->data);
        node = node->next;
    }
}
void insert(int data){
    struct Node* newnode=createNode(data);

}
int main(){
    struct Node* head = createNode(1);
   // head->next = createNode(2);
    //head->next->next = createNode(3);
   // head->next->next->next = createNode(4);
    //head->next->next->next->next = createNode(5);
    print(head);
 
}