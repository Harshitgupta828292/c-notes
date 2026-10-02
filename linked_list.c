#include <stdio.h>      // input-output ke liye
#include <stdlib.h>     // malloc aur free ke liye


// node ka structure
struct Node {
    int data;           // data store karega
    struct Node *next;  // next node ka address
};

struct Node *head = NULL;   // head pointer (start)

// insert at end (sabse easy insert)
void insert(int value) {
    struct Node *newNode;                   // naya node
    newNode = (struct Node*)malloc(sizeof(struct Node)); // memory allocate
    newNode->data = value;                  // value store
    newNode->next = NULL;                   // last node

    if (head == NULL) {                     // agar list empty hai
        head = newNode;                     // head = new node
        return;                             // function end
    }

    struct Node *temp = head;               // temp head se start
    while (temp->next != NULL) {            // last node tak jao
        temp = temp->next;                  // next node
    }
    temp->next = newNode;                   // last ke next me new node
}

// delete from beginning (sabse easy delete)
void delete() {
    if (head == NULL) {                     // agar list empty hai
        printf("List empty hai\n");         // message
        return;
    }

    struct Node *temp = head;               // temp = head
    head = head->next;                      // head ko aage badhao
    free(temp);                             // purana head delete
}

// display linked list
void display() {
    struct Node *temp = head;               // temp head se start

    if (temp == NULL) {                     // agar list empty hai
        printf("List empty hai\n");
        return;
    }

    while (temp != NULL) {                  // jab tak node hai
        printf("%d -> ", temp->data);       // data print
        temp = temp->next;                  // next node
    }
    printf("NULL\n");                       // end show
}

// main function
int main() {
    insert(10);     // insert valuex
    insert(20);
    insert(30);

    display();      // list print

    delete();       // delete first node
    display();      // dobara print

    return 0;       // program end
}

