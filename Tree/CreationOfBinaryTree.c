#include <stdio.h>
#include <stdlib.h>

struct BinaryTree {
    int data;
    struct BinaryTree *left, *right;
};

typedef struct BinaryTree node;

node *create() {
    int x;
    node *newnode;
    newnode = (node *) malloc(sizeof(node));
    printf("Enter Data: ");
    scanf("%d", &x);
    
    if (x==-1) {
        return 0;
    }

    newnode->data = x;

    printf("For the left child of %d", x);
    printf("\n");
    newnode->left = create();

    printf("For the right child of %d",x);
    printf("\n");
    newnode->right = create();

    return newnode;
}

void main() {
    node *root;
    root = 0;
    root = create();
}
