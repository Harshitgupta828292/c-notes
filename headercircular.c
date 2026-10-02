#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Create header circular linked list
Node* createHeader() {
    Node* header = createNode(-1);
    header->next = header;  // Circular connection to itself
    return header;
}

// Traverse header circular linked list
void traverseHeaderList(Node* header) {
    if (header->next == header) {
        printf("List is empty\n");
        return;
    }

    Node* temp = header->next;
    printf("Header Circular List: ");

    while (temp != header) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("(HEAD)\n");
}

// Insert at beginning (after header)
void insertAtBeginning(Node* header, int data) {
    Node* newNode = createNode(data);

    newNode->next = header->next;
    header->next = newNode;
}

// Insert at end
void insertAtEnd(Node* header, int data) {
    Node* newNode = createNode(data);

    Node* temp = header;
    while (temp->next != header) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = header;
}

// Delete at beginning
void deleteAtBeginning(Node* header) {
    if (header->next == header) {
        printf("List is empty\n");
        return;
    }

    Node* first = header->next;
    header->next = first->next;
    free(first);

    printf("Deleted first node\n");
}

// Delete a specific value
void deleteValue(Node* header, int key) {
    if (header->next == header) {
        printf("List is empty\n");
        return;
    }

    Node* prev = header;
    Node* curr = header->next;

    while (curr != header && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == header) {
        printf("Value %d not found\n", key);
        return;
    }

    prev->next = curr->next;
    free(curr);

    printf("Deleted value %d\n", key);
}

int main() {
    Node* header = createHeader();

    insertAtBeginning(header, 10);
    insertAtBeginning(header, 5);
    insertAtEnd(header, 20);
    insertAtEnd(header, 30);

    traverseHeaderList(header);

    deleteAtBeginning(header);
    traverseHeaderList(header);

    deleteValue(header, 20);
    traverseHeaderList(header);

    return 0;
}
