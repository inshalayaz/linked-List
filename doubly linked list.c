#include<stdlib.h>

struct Node{
    int data;
    struct Node *next,*prev;
};
struct Node *head;


void insertAtHead(int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;

    if(head == NULL) {       
        head = newnode;
    }else{
    head->prev = newnode;
    newnode->next = head;

    head = newnode;
    }
}

void insertAtTail(int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;

    if(head == NULL) {       
        head = newnode;
    }else{
        struct Node *curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        
        curr->next = newnode;
        newnode->prev = curr;

    }
}


void printNodes(){
    struct Node *curr = head;

    while(curr != NULL){
        printf("%d ", curr->data);
        curr = curr->next;
    }
}

void reversePrint(){
    struct Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    printf("Reverse: ");

    while(curr != NULL){
        printf("%d\n", curr->data);
        curr = curr->prev;
    }
}



void main(){
    insertAtTail(141);
    insertAtTail(302);
    insertAtTail(164);
    insertAtTail(530);
    insertAtTail(474);

    reversePrint();
}