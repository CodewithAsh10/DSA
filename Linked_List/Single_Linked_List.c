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
        } 
        else {
            temp = head;
            while (temp->next != 0) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

}

void printList(node *head) {
    node *current = head;
    while (current != 0) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("NULL \n");
}

int main() {
    int size;
    
    printf("Enter the number of nodes to create: ");
    scanf("%d", &size);

    createlist(size);

    printf("\nLinked list elements:\n");
    printList(head);

    return 0;
}
