#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *next;
    node *back;

    node(int data1, node* next1, node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};


node* convertArr2LL(vector<int>& arr) {
    if(arr.empty()) return nullptr;
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++) {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}   

void print(node *head){

    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
// node*revere(node *head,vector<int>arr){
//     int n = arr.size();
//     node *head = new node(arr[n - 1]);
//     node *temp = head;
//     for (int i = n-2; i >= 0;i--){
//          node *newnode = new node(arr[i]);
//          temp->next = newnode;
//          temp = newnode;
//     }
//     return head;
// }
node *reveretack(node*head,vector<int>&arr){
    
    node *temp = head;
    stack<int> mystack;
    while(temp!=nullptr){
        mystack.push(temp->data);
        temp=temp->next;
    }
    temp = head;
    while(temp!=nullptr){
        temp->data = mystack.top();
        mystack.pop();
        temp = temp->next;
    }
    return head;
}
int main() {
    vector<int> arr = {12, 5, 6, 8, 7};
    node *head = convertArr2LL(arr);
    head = reveretack(head, arr);
    print(head);
}
