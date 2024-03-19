#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node * next;
};

typedef struct node Node;
typedef Node * NodePtr;


NodePtr ins_k(NodePtr head, int k) {
    NodePtr new_head = head;

    while (head->next->next != NULL) {
        if (head->next->data > k)
            break;
        head = head->next;
    }

    NodePtr new = malloc(sizeof(Node));
    new->data = k;
    new->next = head->next;
    head->next = new;

    return new_head;
}


int main() {
    int k = 6;
    NodePtr head;
    NodePtr new = malloc(sizeof(Node));
    new->data = 1;
    new->next = NULL;
    head = new;
    
    for (int i = 2; i < 10; i++) {
        if (i % 2 != 0) {
            new->next = malloc(sizeof(Node));
            new = new->next;
            new->data = i;
        }
    }
    new->next = NULL;

    head = ins_k(head, k);

    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");

    return 0;
}