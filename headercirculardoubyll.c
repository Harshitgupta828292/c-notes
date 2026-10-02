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

// Create header node (circular + doubly)
Node* createHeader() {
    Node* header = createNode(-1);
    header->next = header;  // Circular
    header->prev = header;  // Circular
    return header;
}

// Traverse forward
void traverseForward(Node* header) {
    if (header->next == header) {
        printf("List is empty\n");
        return;
    }

    Node* temp = header->next;
    printf("Forward: ");

    while (temp != header) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("(HEAD)\n");
}

// Traverse backward
void traverseBackward(Node* header) {
    if (header->prev == header) {
        printf("List is empty\n");
        return;
    }

    Node* temp = header->prev;
    printf("Backward: ");

    while (temp != header) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }

    printf("(HEAD)\n");
}

// Insert at beginning (after header)
void insertAtBeginning(Node* header, int data) {
    Node* newNode = createNode(data);
    Node* first = header->next;

    newNode->next = first;
    newNode->prev = header;

    header->next = newNode;
    first->prev = newNode;
}

// Insert at end (before header)
void insertAtEnd(Node* header, int data) {
    Node* newNode = createNode(data);
    Node* last = header->prev;

    newNode->next = header;
    newNode->prev = last;

    last->next = newNode;
    header->prev = newNode;
}

// Search a key
Node* search(Node* header, int key) {
    Node* temp = header->next;

    while (temp != header) {
        if (temp->data == key)
            return temp;
        temp = temp->next;
    }

    return NULL;
}

// Delete at beginning
void deleteAtBeginning(Node* header) {
    if (header->next == header) {
        printf("List is empty\n");
        return;
    }

    Node* first = header->next;

    header->next = first->next;
    first->next->prev = header;

    free(first);
    printf("Deleted first node\n");
}

// Delete at end
void deleteAtEnd(Node* header) {
    if (header->prev == header) {
        printf("List is empty\n");
        return;
    }

    Node* last = header->prev;

    last->prev->next = header;
    header->prev = last->prev;

    free(last);
    printf("Deleted last node\n");
}

// Delete a specific value
void deleteValue(Node* header, int key) {
    Node* target = search(header, key);

    if (target == NULL) {
        printf("Value %d not found\n", key);
        return;
    }

    target->prev->next = target->next;
    target->next->prev = target->prev;

    free(target);
    printf("Deleted value %d\n", key);
}

int main() {
    Node* header = createHeader();

    insertAtBeginning(header, 10);
    insertAtBeginning(header, 5);
    insertAtEnd(header, 20);
    insertAtEnd(header, 30);

    traverseForward(header);
    traverseBackward(header);

    deleteAtBeginning(header);
    traverseForward(header);

    deleteAtEnd(header);
    traverseForward(header);

    deleteValue(header, 20);
    traverseForward(header);

    Node* result = search(header, 30);
    if (result)
        printf("Search: 30 found\n");
    else
        printf("Search: 30 not found\n");

    return 0;
}
