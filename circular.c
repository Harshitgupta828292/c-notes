#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Create Node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Traverse Circular Linked List
void traverseCircular(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* temp = head;

    printf("Circular List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(HEAD)\n");
}

// Insert at Beginning
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        newNode->next = newNode;  // Self loop
        return;
    }

    Node* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }

    newNode->next = *head;
    temp->next = newNode;
    *head = newNode;
}

// Insert at End
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        newNode->next = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = *head;
}

// Search in circular list
Node* search(Node* head, int key) {
    if (head == NULL) return NULL;

    Node* temp = head;

    do {
        if (temp->data == key)
            return temp;
        temp = temp->next;
    } while (temp != head);

    return NULL;
}

// Delete at Beginning
void deleteAtBeginning(Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* temp = *head;

    // Only one node
    if ((*head)->next == *head) {
        free(temp);
        *head = NULL;
        return;
    }

    Node* last = *head;
    while (last->next != *head) {
        last = last->next;
    }

    last->next = (*head)->next;
    *head = (*head)->next;

    free(temp);

    printf("First node deleted.\n");
}

// Delete specific value
void deleteValue(Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* current = *head;
    Node* prev = NULL;

    // Case 1: head node is the value
    if (current->data == key) {
        deleteAtBeginning(head);
        return;
    }

    do {
        prev = current;
        current = current->next;
    } while (current != *head && current->data != key);

    if (current->data != key) {
        printf("Value %d not found!\n", key);
        return;
    }

    prev->next = current->next;
    free(current);

    printf("Deleted value %d\n", key);
}

int main() {
    Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    traverseCircular(head);

    insertAtBeginning(&head, 5);
    printf("\nAfter inserting 5 at beginning:\n");
    traverseCircular(head);

    insertAtEnd(&head, 40);
    printf("\nAfter inserting 40 at end:\n");
    traverseCircular(head);

    int key = 20;
    Node* result = search(head, key);
    if (result != NULL)
        printf("\nSearch: %d found\n", key);
    else
        printf("\nSearch: %d not found\n", key);

    deleteAtBeginning(&head);
    traverseCircular(head);

    deleteValue(&head, 30);
    traverseCircular(head);

    return 0;
}
