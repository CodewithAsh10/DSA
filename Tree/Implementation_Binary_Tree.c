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

void Preorder(node *root) {
    if (root==0) {
        return;
    }

    printf("%d ", root->data);
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(node *root) {
    if (root==0) {
        return;
    }

    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);
}

void Postorder(node *root) {
    if (root==0) {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    printf("%d ", root->data);
}

void main() {
    node *root;
    root = 0;
    root = create();

    printf("Preorder: ");
    Preorder(root);
    printf("\n");

    printf("Inorder: ");
    Inorder(root);
    printf("\n");

    printf("Postorder: ");
    Postorder(root);
}
