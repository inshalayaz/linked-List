#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *head, *tail;

void createNode(int value){
    struct Node *newNode;

    newNode =(struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
        tail->next = head;

}

void printNodes(){
    if(head == NULL){
        printf("The List is empty");
    }else{
        struct Node *curr = tail->next;

        while(curr->next != tail->next){
            printf("%d \n", curr ->data);
            curr = curr ->next;

        }
        printf("%d", curr->data);
        printf("\n check %d", tail->next->data);
    }
}


void delete(int value){
    struct Node *curr,*prev = head;

    if(value == head->data){
        tail->next = head->next;
        head = head->next;
        free(curr);
    }
    else if( value == tail->data ){

       while(curr->next != tail->next){
           prev = curr;
           curr = curr->next;
       }
       prev->next = tail->next;
       free(curr);
        // while( value != curr->data || curr != NULL  ){
        //     prev = curr;
        //     curr = curr->next;
        //     break;
        // }
        //     printf("hello");
        // if (curr == NULL)
        //         return;

        // prev = curr->next;
        // free(curr); 
    }
}

void main(){
    createNode(141);
    createNode(302);
    createNode(164);
    createNode(530);
    createNode(474);

    delete(474);
    printNodes();
}