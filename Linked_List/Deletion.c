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

// Function to delete the first node
void delete_at_beginning() {
    if (head == 0) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    node *temp = head;
    head = head->next;
    free(temp);
    printf("Node deleted from the beginning.\n");
}

// Function to delete the last node using a prev pointer
void delete_at_end() {
    if (head == 0) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    // Case 1: Only one node in the list
    if (head->next == 0) {
        free(head);
        head = 0;
        printf("Node deleted from the end.\n");
        return;
    }
    // Case 2: More than one node
    node *temp = head;
    node *prev = 0;
    while (temp->next != 0) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = 0;
    free(temp);
    printf("Node deleted from the end.\n");
}

// Function to delete a node at a given position
void delete_at_intermediate(int pos) {
    if (head == 0) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    if (pos == 1) {
        delete_at_beginning();
        return;
    }

    node *temp = head;
    node *prev = 0;
    int i = 1;

    // Traverse to the position
    while (i < pos && temp != 0) {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == 0) {
        printf("Invalid position.\n");
    } else {
        prev->next = temp->next;
        free(temp);
        printf("Node deleted from position %d.\n", pos);
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
    
    printf("\nDeleting the node from the beginning...\n");
    delete_at_beginning();
    printf("After deletion from beginning:\n");
    printList(head);

    printf("\nDeleting the node from the end...\n");
    delete_at_end();
    printf("After deletion from the end:\n");
    printList(head);

    printf("\nEnter the position to delete a node from: ");
    scanf("%d", &pos);
    delete_at_intermediate(pos);
    printf("After deletion from position %d:\n", pos);
    printList(head);

    return 0;
}
