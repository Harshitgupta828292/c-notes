#include <stdio.h>
#include <stdlib.h>

// node structure
struct node {
    int data;              // data part
    struct node *next;     // next node ka address
};

struct node *top = NULL;  // top pointer

// push operation
void push(int value) {
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node)); // memory allocate
    newNode->data = value;   // value store
    newNode->next = top;     // top ko next bana do
    top = newNode;           // top update
    printf("%d pushed\n", value);
}

// pop operation
void pop() {
    struct node *temp;
    if (top == NULL) {       // stack empty
        printf("Stack Underflow\n");
    } else {
        temp = top;          // top ko temp me store
        printf("%d popped\n", temp->data);
        top = top->next;     // top ko aage badhao
        free(temp);          // memory free
    }
}

// display stack
void display() {
    struct node *temp = top;
    if (top == NULL) {
        printf("Stack Empty\n");
    } else {
        printf("Stack elements: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}
