#include <stdio.h>
#include <stdlib.h>

// node structure
struct node {
    int data;              // data part
    struct node *next;     // next node ka address
};

struct node *front = NULL;   // front pointer
struct node *rear = NULL;    // rear pointer

// enqueue operation
void enqueue(int value) {
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node)); // memory allocate
    newNode->data = value;   // value store
    newNode->next = NULL;    // last node hoga

    if (rear == NULL) {      // queue empty
        front = rear = newNode;
    } else {
        rear->next = newNode; // rear ke next me node add
        rear = newNode;       // rear update
    }
    printf("%d inserted\n", value);
}

// dequeue operation
void dequeue() {
    struct node *temp;
    if (front == NULL) {     // queue empty
        printf("Queue Underflow\n");
    } else {
        temp = front;        // front ko temp me store
        printf("%d deleted\n", temp->data);
        front = front->next; // front aage badhao
        free(temp);          // memory free

        if (front == NULL)   // agar queue khali ho jaye
            rear = NULL;
    }
}

// display queue
void display() {
    struct node *temp = front;
    if (front == NULL) {
        printf("Queue Empty\n");
    } else {
        printf("Queue elements: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
