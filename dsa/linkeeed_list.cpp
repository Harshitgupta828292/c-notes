#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
   int data;
    node *next;
    public:
    node(int data1,node*next1){
        data = data1;
        next = next1;
    }
};
node*convertArrtoll(vector<int> &arr){
    node* head = new node(arr[0],nullptr);
    node* mover = head;
    for (int i = 1; i < arr.size();i++){
        node *temp = new node(arr[i],nullptr);
        mover->next=temp;
        mover = temp;

    }
    return head;
}

int main(){
    vector<int>arr={12,5,8,7};
    // node *y = new node(arr[0], nullptr);
    // // if you left new then you are just create a node
    node *head = convertArrtoll(arr);
    cout << head->data;
    // directly gave the memeory 
    // if you use class in struct  they work same 
}