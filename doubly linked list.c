#include<stdlib.h>

struct Node{
    int data;
    struct Node *next,*prev;
};
struct Node *head;


void createNode(int value){

struct Node *temp = (struct Node*)malloc(sizeof(struct Node));

temp->data = value;
temp->next= NULL;
temp->prev = NULL;

if(head == NULL){
    head = temp;
}else{
    struct Node *curr = head;

    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    curr = temp;
    }

}

void printNodes(){
    struct Node *curr = head;

    while(curr != NULL){
        printf("%d ", curr->data);
        curr = curr->next;
    }
}

void main(){
    createNode(141);
    createNode(302);
    createNode(164);
    createNode(530);
    createNode(474);

    printNodes();
}