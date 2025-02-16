#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node {
    int data;
    node *next;
} node;

void insert(node *newNode, int data) {
    if (newNode == NULL) return NULL;
    newNode->next = createNode(data);
}

#endif