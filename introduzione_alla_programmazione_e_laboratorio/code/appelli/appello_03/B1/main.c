#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node * next;
};

typedef struct node Node;
typedef Node * NodePtr;


NodePtr coda(NodePtr head, int value) {
    NodePtr new = head;
    while (new->next != NULL) {
        new = new->next;
    }
    new->next = malloc(sizeof(Node));
    new->next->next = NULL;
    new->next->data = value;
    return head;
}

int pari(NodePtr head) {
    if (head == NULL)
        return 0;
    if (head->data % 2 == 0)
        return 1 + pari(head->next);
    return pari(head->next);
}


int main() {
    NodePtr head = malloc(sizeof(Node));
    head->data = 1;
    head->next = NULL;
    coda(head, 2);
    coda(head, 3);
    coda(head, 4);

    NodePtr x = head;

    while (x != NULL) {
        printf("%d\n", x->data);
        x = x->next;
    }

    printf("Pari: %d\n", pari(head));
    
    return 0;
}