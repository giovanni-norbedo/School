#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};

typedef struct node Node;
typedef Node * NodePtr;


void print_list(NodePtr head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n\n");
}

int get_length(NodePtr head) {
    NodePtr tmp = head;
    int length = 0;
    while (tmp != NULL) {
        tmp = tmp->next;
        length += 1;
    }
    return length;
}

void free_list(NodePtr head) {
    NodePtr new;
    while (head->next != NULL){
        new = head;
        head = head->next;
        free(new);
    }
}

NodePtr copy_list(NodePtr head) {
    NodePtr tmp = head;
    NodePtr new_head;
    NodePtr new = malloc(sizeof(Node));
    new_head = new;
    new->data = tmp->data;
    tmp = tmp->next;
    while (tmp != NULL) {
        new->next = malloc(sizeof(Node));
        new = new->next;
        new->data = tmp->data;
        tmp = tmp->next;
    }
    return new_head;
}

NodePtr insert_first(NodePtr head, int data) {
    NodePtr new = malloc(sizeof(Node));
    new->data = data;
    new->next = head;
    head = new;
    return head;
}

NodePtr remove_first(NodePtr head) {
    NodePtr new_head = head;
    new_head = head->next;
    free(head);
    return new_head;
}

NodePtr insert_last(NodePtr head, int data) {
    NodePtr new_head = head;
    NodePtr new = malloc(sizeof(Node));
    new->data = data;
    while (head->next != NULL) {
        head = head->next;
    }
    head->next = new;
    return new_head;
}

NodePtr remove_last(NodePtr head) {
    NodePtr new_head = head;
    while (head->next->next != NULL) {
        head = head->next;
    }
    head->next = NULL;
    return new_head;
}

NodePtr insert_mid(NodePtr head, int data, int position) {
    if (position == 0) {
        return insert_first(head, data);
    }
    NodePtr new_head = head;
    NodePtr new = malloc(sizeof(Node));
    new->data = data;
    for (int i = 1; i < position; i++) {
        head = head->next;
    }
    new->next = head->next;
    head->next = new;
    return new_head;
}

NodePtr remove_mid(NodePtr head, int position) {
    if (position == 0) {
        return remove_first(head);
    }
    NodePtr new_head = head;
    for (int i = 1; i < position; i++) {
        head = head->next;
    }
    head->next = head->next->next;
    return new_head;
}

NodePtr invert(NodePtr head) {
    int length = get_length(head);

    NodePtr old = head;
    NodePtr curr = head->next;
    NodePtr new = NULL;
    
    old->next = NULL;
    
    for (int i = 1; i <= length - 1; i++) {
        new = curr->next;
        curr->next = old;
        old = curr;
        curr = new;
    }
    return old;
}

int check_palindrome(NodePtr head) {
    NodePtr tmp1 = head;
    NodePtr tmp2 = copy_list(head);
    tmp2 = invert(tmp2);
    while (tmp1 != NULL) {
        if (tmp1->data != tmp2->data) {
            return 0;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return 1;
}

NodePtr remove_duplicates(NodePtr head) {
    NodePtr new_head = head;
    while (head != NULL) {
        NodePtr new = head;
        while (new->next != NULL) {
            if (new->next->data == head->data) {
                NodePtr tmp = new->next;
                new->next = new->next->next;
            } 
            else {
                new = new->next;
            }
        }
        head = head->next;
    }
    return new_head;
}


int main() {
    int var = 88;
    int pos = 3;

    NodePtr head = NULL;
    NodePtr new = malloc(sizeof(Node));
    new->data = 1;
    head = new;

    for (int i = 2; i <= 10; i++) {
        new->next = malloc(sizeof(Node));
        new = new->next;
        
        // to create 1,2,3,4,5,6,7,8,9,10
        // new->data = i;

        // to create 1,2,3,4,5,5,4,3,2,1
        if (i <= 5) new->data = i;
        else new->data = 11 - i;
    }
    new->next = NULL;

    printf("Initial list: \n");
    print_list(head);

    printf("List length: %d\n\n", get_length(head));

    printf("Copy of list: \n");
    NodePtr copy = copy_list(head);
    print_list(copy);

    head = insert_first(head, var);
    printf("List with first element inserted: \n");
    print_list(head);

    head = remove_first(head);
    printf("List with first element removed: \n");
    print_list(head);

    head = insert_last(head, var);
    printf("List with last element inserted: \n");
    print_list(head);

    head = remove_last(head);
    printf("List with last element removed: \n");
    print_list(head);

    head = insert_mid(head, var, pos);
    printf("List with an element inserted to a specific position: \n");
    print_list(head);

    head = remove_mid(head, pos);
    printf("List with an element removed in a specific position: \n");
    print_list(head);

    head = invert(head);
    printf("Inverted list: \n");
    print_list(head);

    head = invert(head);
    printf("Re-inverted list: \n");
    print_list(head);

    int is_palindrome = check_palindrome(head);
    printf("Is palindrome: %d \n", is_palindrome);

    head = remove_duplicates(head);
    printf("List without duplicates: \n");
    print_list(head);

    free_list(head);

    return 0;
}