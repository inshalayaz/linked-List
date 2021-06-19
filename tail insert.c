#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}; 
struct Node *head = NULL;

void createNode(int value){
struct Node *temp,*curr;
curr = head;
temp = (struct Node *)malloc(sizeof(struct Node));

temp->next = NULL;
temp->data = value;

while(curr->next != NULL){
    curr = curr->next;
    }
curr = temp;
}

