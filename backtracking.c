#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*next;
    int data;
}
struct node*head=NULL;
void insert(int value){
    struct node*new node;
    new node=(struct node*)malloc(sizeof(struct node));
    new node->data=value;
    new node->next=NULL;
    if(head==NULL){
        head=new node;
        return;


    }
    struct node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new node;
}
}
