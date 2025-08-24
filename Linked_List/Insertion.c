#include <stdio.h>
#include <stdlib.h>

struct SingleLinkedList {
    int data;
    struct SingleLinkedList *next;
};

typedef struct SingleLinkedList node;

node *head = 0;

node * getnode() {
    
    node *newnode;
    newnode = (node *) malloc(sizeof(node));

    if (newnode == 0) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    return newnode;
}

void createlist(int n) {

    node *newnode, *temp;

    for (int i = 0; i < n; i++) {
        newnode = getnode();
        if (head == 0) {
            head = newnode;
        } else {
            temp = head;
            while (temp->next != 0) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

}

void insert_at_beginning() {
    node *newnode = getnode();
    newnode->next = head;
    head = newnode;
}

void insert_at_end() {
    node *newnode = getnode();
    if (head == 0) {
        head = newnode;
    } else {
        node *temp = head;
        while (temp->next != 0) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void insert_at_intermediate(int pos) {
    int i = 0;
    node *temp = head;
    node *newnode = getnode();

    // Traverse to the position before the insertion point
    while (i < pos - 1 && temp != 0) {
        temp = temp->next;
        i++;
    }

    if (temp == 0) {
        printf("Invalid position.\n");
        free(newnode); // Free the node if position is invalid
    } else {
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void printList(node *head) {
    node *current = head;
    while (current != 0) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL \n");
}

int main() {
    int size, pos;
    
    printf("Enter the number of nodes to create: ");
    scanf("%d", &size);

    createlist(size);

    printf("\nOriginal linked list:\n");
    printList(head);

    printf("\nInserting a node at the beginning...\n");
    insert_at_beginning();
    printf("After insertion at beginning:\n");
    printList(head);

    printf("\nInserting a node at the end...\n");
    insert_at_end();
    printf("After insertion at end:\n");
    printList(head);

    printf("\nEnter the position to insert a node at: ");
    scanf("%d", &pos);
    insert_at_intermediate(pos);
    printf("After insertion at position %d:\n", pos);
    printList(head);

    return 0;
}
