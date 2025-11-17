#include <stdio.h>
#include <stdlib.h>

struct Tree {
    int key;
    struct Tree *right, *left;
};

struct Tree *newNode(int value) {
    struct Tree *node = (struct Tree *)malloc(sizeof(struct Tree));

    if (node == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    node->key = value;
    node->left = NULL;
    node->right = NULL;

    return node;
}

struct Tree *insert(struct Tree *root, int value) {
    if (root == NULL) {
        return newNode(value);
    } else if (value < root->key) {
        root->left = insert(root->left, value);
    } else if (value > root->key) {
        root->right = insert(root->right, value);
    }
}

void inOrder(struct Tree *root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->key);
        inOrder(root->right);
    }
}

int main() {
    struct Tree *root = NULL;
    root = insert(root, 40);
    insert(root, 10);
    insert(root, 60);
    insert(root, 5);
    inOrder(root);
}