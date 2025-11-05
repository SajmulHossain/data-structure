#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

void printLinkedList(struct Node* p) {
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
    }
    printf("\n");
}

int main() {
    struct Node *HEAD = NULL, *TEMP = NULL, *NODE = NULL;
    int n;

    printf("Enter the size of linked list: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        NODE = (struct Node*) malloc(sizeof(struct Node));

        printf("Enter the value for node %d: ", i);
        scanf("%d", &NODE->value);
        NODE->next = NULL;

        if (HEAD == NULL) {
            HEAD = NODE;
            TEMP = HEAD;
        } else {
            TEMP->next = NODE;
            TEMP = NODE;
        }
    }

    printf("Linked List elements are: ");
    printLinkedList(HEAD);

    free(HEAD);

    return 0;
}
