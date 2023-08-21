#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node_t;

void linkedlstTraverse(struct Node *ptr);
#endif // LINKEDLIST_H_INCLUDED
