#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* top = NULL;  // top pointer

// Check empty
int isEmpty() {
    return top == NULL;
}

// Push
void push(int x) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory error\n");
        return;
    }
    newNode->data = x;
    newNode->next = top;
    top = newNode;
    printf("%d pushed\n", x);
}

// Pop
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }

    Node* temp = top;
    int val = temp->data;
    top = top->next;
    free(temp);

    return val;
}

// Peek
int peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

// Display stack
void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }

    Node* temp = top;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);

    display();

    printf("Peek: %d\n", peek());

    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());

    display();

    return 0;
}
