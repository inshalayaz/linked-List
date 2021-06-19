#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}; 
struct Node *head = NULL;

void createNode(int value){
struct Node *temp,*temp2,*curr;
    
    temp = (struct Node *)malloc(sizeof(struct Node));
    
    temp->data = value;
    temp->next = NULL;
    
    if(head == NULL){
        head = temp;
    }else{
        temp2 = head;
        head = temp;
        head->next = temp2;
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


void main(){
    createNode(141);
    createNode(302);
    createNode(164);
    createNode(530);
    createNode(474);

    printNodes();
}
