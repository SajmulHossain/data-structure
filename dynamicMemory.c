#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void printLinkedList(struct node *p) {
    while (p != NULL) {
        printf("%d ", p->value);
        p = p -> next;
    }
}

int main() {
    struct node *head= NULL;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    head = malloc(sizeof(struct node));
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    head -> value = 1;
    one -> value = 2;
    two -> value = 3;
    three -> value = 4;

    head -> next = one;
    one -> next = two;
    two -> next = three;
    three -> next = NULL;
    
    printLinkedList(head);
    free(head);
    return 0;
}
