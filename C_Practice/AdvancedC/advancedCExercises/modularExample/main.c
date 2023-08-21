//linked lists example - 1

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void linkedlstTraverse(struct Node *ptr){
    while(ptr != NULL){
        printf("%d -",ptr->data);
        ptr = ptr->next;
    }
}

int main(){

    node_t *head;
    head = (struct Node *)malloc(sizeof(struct Node));
    node_t *secondNode;
    secondNode = (struct Node *)malloc(sizeof(struct Node));
    node_t *thirdNode;
    thirdNode = (struct Node *)malloc(sizeof(struct Node));

    //link head and second node
    head->data = 8;
    head->next = secondNode;

    //link second and third node
    secondNode->data = 19;
    secondNode->next = thirdNode;

    //terminate the list at third node
    thirdNode->data = 23;
    thirdNode->next = NULL;

    //show all the node values by traversing each node
    linkedlstTraverse(head);

    //deallocating memory
    free(head);
    free(secondNode);
    free(thirdNode);

    return 0;
}
