#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// Create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Traverse forward
void traverseForward(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* temp = head;
    printf("Forward: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Traverse backward
void traverseBackward(Node* tail) {
    if (tail == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* temp = tail;
    printf("Backward: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

// Insert at beginning
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);

    newNode->next = *head;
    if (*head != NULL)
        (*head)->prev = newNode;

    *head = newNode;
}

// Insert at end
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Insert after a value
void insertAfter(Node* head, int key, int data) {
    Node* temp = head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL) {
        printf("Value %d not found\n", key);
        return;
    }

    Node* newNode = createNode(data);

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

// Delete at beginning
void deleteAtBeginning(Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* temp = *head;
    *head = temp->next;

    if (*head != NULL)
        (*head)->prev = NULL;

    free(temp);
    printf("Deleted first node\n");
}

// Delete at end
void deleteAtEnd(Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* temp = *head;

    if (temp->next == NULL) { // Only 1 node
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;
    free(temp);

    printf("Deleted last node\n");
}

// Delete a specific value
void deleteValue(Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* temp = *head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL) {
        printf("Value %d not found\n", key);
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        *head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    printf("Deleted value %d\n", key);
}

// Search
Node* search(Node* head, int key) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == key)
            return temp;
        temp = temp->next;
    }

    return NULL;
}

int main() {
    Node* head = NULL;

    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    traverseForward(head);

    // Find tail for backward traversal
    Node* tail = head;
    while (tail->next != NULL)
        tail = tail->next;

    traverseBackward(tail);

    insertAfter(head, 20, 25);
    traverseForward(head);

    deleteAtBeginning(&head);
    traverseForward(head);

    deleteAtEnd(&head);
    traverseForward(head);

    deleteValue(&head, 25);
    traverseForward(head);

    Node* result = search(head, 30);
    if (result)
        printf("Search: 30 found\n");
    else
        printf("Search: 30 not found\n");

    return 0;
}
