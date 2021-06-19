#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}; 
struct Node *head = NULL;

void createNode(int value){
struct Node *temp;
temp = (struct Node *)malloc(sizeof(struct Node));

temp->next = NULL;
temp->data = value;

if(head == NULL){
    head = temp;
}else{
    struct Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
}

}

void printNodes(){
    if(head == NULL){
        printf("The List is empty");
    }else{
        struct Node *curr = head;
        while(curr != NULL){
            printf("%d \n", curr ->data);
            curr = curr ->next;

        }
    }
}


void deleteNode(int value){
    struct Node *curr,*temp = head,*prev;

    if(head->data == value){
        temp = head;
        head = head->next;
        free(temp);
    }else{
            while (temp != NULL && temp->data != value) {
                prev = temp;
                temp = temp->next;
            }
        
            // If key was not present in linked list
            if (temp == NULL)
                return;
        
            // Unlink the node from linked list
            prev->next = temp->next;
        
            free(temp); // Free memory
            }

};

void main(){
    createNode(141);
    createNode(302);
    createNode(164);
    createNode(530);
    createNode(474);

    deleteNode(474);
    printNodes();
}
