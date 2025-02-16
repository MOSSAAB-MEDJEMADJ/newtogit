#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node *head = NULL;

node *createNode(int data) {
    node *n = (node*)malloc(sizeof(node));
    n->data = data;
    n->next = NULL;
    return n;
}

void addNode(int data) {
    node *n = createNode(data);
    if (head == NULL) {
        head = n;
        head->next = NULL;
    } else {
        n->next = head;
        head = n;
    }
}

#endif