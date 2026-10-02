#include <stdio.h>

#define SIZE 5   // stack ka size

int stack[SIZE];  // array banaya
int top = -1;     // top pointer

// push function (insert)
void push(int value) {
    if (top == SIZE - 1) {   // agar stack full ho
        printf("Stack Overflow\n");
    } else {
        top++;               // top badhao
        stack[top] = value;  // value insert
        printf("%d pushed\n", value);
    }
}

// pop function (delete)
void pop() {
    if (top == -1) {         // agar stack empty ho
        printf("Stack Underflow\n");
    } else {
        printf("%d popped\n", stack[top]);
        top--;               // top kam karo
    }
}

// display stack
void display() {
    if (top == -1) {
        printf("Stack Empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
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
