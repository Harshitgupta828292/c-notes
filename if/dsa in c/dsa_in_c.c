// // // // // #include <stdio.h>

// // // // // int main() {
// // // // //     int i, j, k, x, y, n;

// // // // //     // User se n aur y input lo
// // // // //     printf("Enter n: ");
// // // // //     scanf("%d", &n);

// // // // //     printf("Enter y: ");
// // // // //     scanf("%d", &y);

// // // // //     // Nested loop i aur j ke liye
// // // // //     for (i = 0; i < n; i++) {
// // // // //         for (j = 0; j < n; j++) {

// // // // //             // Tumhari wali line
// // // // //             k = i;
// // // // //              k++;
// // // // //               x = y + 1;

// // // // //             // Print karte hain values
// // // // //             printf("i = %d, j = %d, k = %d, x = %d, y = %d\n", i, j, k, x, y);
// // // // //         }
// // // // //     }

// // // // //     return 0;
// // // // // }
// // // // // --------------------------------prime---------------
// // // // int is_prime(int n){
// // // //     if (n==1){
// // // //         return 0;
// // // //     }
// // // //    for(int i=2;i*i<n;i++){
// // // //     if (n%i==0)
// // // //         return 0;

// // // //     }
// // // //     return 1;
// // // // }
// // // #include<stdio.h>
// // // #include<stdlib.h>
// // // struct myArray
// // // // abstract data type
// // // // define totalsize and all
// // // {
// // //     // reserved memory
// // // int total_size;
// // // // memory to be reserved 
// // // int used_size;
// // // // int used_size
// // // int *ptr;

// // // // pointer poinnt the 1 eleement 

// // // };
// // // void createArray(struct myArray*a,int tSize,int uSize){
// // //     // (*a).total_size=tSize;
// // //     // (*a).used_size=uSize;
// // //     // (*a).ptr=(int *) malloc(tSize*sizeof(int));
// // //     // same jo ye likha h vohi h 
// // //     // point the 1 heap memory
// // //     a->total_size=tSize;
// // //     a->used_size=uSize;
// // //     a->ptr=(int *) malloc(tSize*sizeof(int));
// // //     // gave memory in form of heap
// // //     // point the 1 heap memorugave us pointer
// // //     // 4 byte all

// // // }
// // // void show(struct myArray*a){
// // //     for(int i =0;i<a->used_size;i++)
// // //     {
// // //         printf("%d", (a->ptr)[i]);
// // //     }
// // // }
// // // void setVal(struct myArray *a){
// // //     int n ;
// // //     for(int i =0;i<a->used_size;i++)
// // //     {
// // //         printf("enter tge element %d",i);
// // //         scanf("%d",&n );
// // //         (a->ptr)[i]=n;
// // //     }
// // // }
// // // int main(){
// // //     struct myArray marks;
// // //     // make a structure of variable 
// // //     createArray(&marks,10,5);
// // //     // iss marks ka adress leke jarha create array ye hi update kr dega 
// // //     printf("we are running setval now\n");
// // //     setVal(&marks);
// // //     printf("we are running setval now\n");

// // //     // 100 me se 20 bacche
    
// // //     show(&marks);

// // //     return 0;
// // // }
// // // -----------------------------------
// // #include<stdio.h>
// // struct card{
// //     int face;
// //     int shape;
// //     int colour;
// // };
// // int main(){
// //     struct card deck[52]={1,2,3,4};
// //     printf("%d",deck[0].face);
// //     printf("%d",deck[0].shape);
// //     printf("%d",deck[51].colour);
// // }
// // -----------------------
// #include <stdio.h>

// struct rectangle {
//     int length;
//     int breath;
// };

// int main() {
//     struct rectangle r = {10, 5}; // stack pe allocate
//     struct rectangle *p = &r;     

//     // values assign
//     r.length = 15;
//     r.breath = 6;

//     // area calculate using direct struct
//     int area1 = r.length * r.breath;
//     printf("Area using r: %d\n", area1);

//     // area calculate using pointer
//     p->length = 20;
//     p->breath = 10;
//     int area2 = p->length * p->breath;
//     printf("Area using p: %d\n", area2);

//     return 0;
// }

// implimentation of stack using linked list
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;  // Stack ka top pointer

// Function to push an element
void push(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Stack Overflow!\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d pushed to stack\n", value);
}

// Function to pop an element
void pop() {
    if (top == NULL) {
        printf("Stack Underflow!\n");
        return;
    }
    struct Node* temp = top;
    printf("%d popped from stack\n", top->data);
    top = top->next;
    free(temp);
}

// Function to peek (top element)
void peek() {
    if (top == NULL) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Top element: %d\n", top->data);
}

// Function to display stack
void display() {
    if (top == NULL) {
        printf("Stack is empty!\n");
        return;
    }
    struct Node* temp = top;
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
    display();   // Stack elements: 30 20 10
    peek();      // Top element: 30
    pop();       // 30 popped
    display();   // Stack elements: 20 10
    return 0;
}
