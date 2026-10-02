#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

// Check if queue is empty
int isEmpty() {
    return (front == -1 || front > rear);
}

// Check if queue is full
int isFull() {
    return (rear == SIZE - 1);
}

// Insert value
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is FULL!\n");
    } else {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("%d inserted.\n", value);
    }
}

// Remove value
void dequeue() {
    if (isEmpty()) {
        printf("Queue is EMPTY!\n");
    } else {
        printf("%d removed.\n", queue[front]);
        front++;

        // Reset queue if last element removed
        if (front > rear) {
            front = rear = -1;
        }
    }
}

// Show front element
void peek() {
    if (isEmpty()) {
        printf("Queue is EMPTY!\n");
    } else {
        printf("Front element = %d\n", queue[front]);
    }
}

// Display entire queue
void display() {
    if (isEmpty()) {
        printf("Queue is EMPTY!\n");
    } else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n----- Queue Menu -----\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
