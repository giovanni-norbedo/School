#include <stdio.h>
#include <stdlib.h>


struct node {
    int * a;
    int dim;
    struct node * next;
};
typedef struct node Node;
typedef Node * NodePtr;


NodePtr init(int n) {
    NodePtr head = malloc(sizeof(Node));
    head->dim = n;
    head->a = (int *)malloc(sizeof(int) * n);
    head->next = NULL;
    return head;
}

void print_list(NodePtr list) {
    NodePtr head = list;
    while (head != NULL) {
        printf("n = %d / ", head->dim);
        for (int i = 0; i < head->dim; i++) {
            printf("%d, ", head->a[i]);
        }
        printf("\n");
        head = head->next;
    }
}


int main() {
    NodePtr list = init(4);
    list->next = init(12);
    print_list(list);
    // -> n = 4 | 0, 0, 0, 0,
    // -> n = 12 | 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, %

    return 0;
}