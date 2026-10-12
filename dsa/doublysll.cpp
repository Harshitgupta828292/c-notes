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

// 1. Delete head of a DLL
node* deleteHead(node *head) {
    if (head == nullptr) {
        return nullptr;
    }
    if (head->next == nullptr) { // memory free karni zaroori hai
        delete head;
        return nullptr;
    }
    node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

// 2. Delete from end of a DLL
node* deleteFromEnd(node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    node *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    node *prev = temp->back;
    temp->back = nullptr;
    prev->next = nullptr;
    delete temp;
    return head;
}

// 3. Delete k-th element
node* deleteKthElement(node* head, int k) {
    if (head == nullptr) {
        return nullptr;
    }
    
    // Agar k=1 hai, to head delete karne wala function call kardo
    if (k == 1) {
        return deleteHead(head);
    }
    
    node *temp = head;
    int cnt = 0;
    
    while (temp != nullptr) {
        cnt++;
        if (cnt == k) {
            break; // Node mil gayi, loop se bahar aao
        }
        temp = temp->next; // ye break ke bahar hona chahiye
    }
    
    // Agar k list ki length se bada hai
    if (temp == nullptr) return head; 
    
    node *prev = temp->back;
    node *front = temp->next;
    
    // Agar tail node hai
    if (front == nullptr) {
        return deleteFromEnd(head);
    }
    
    // Beech ka node hai
    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
    
    return head;
}

// 4. Delete a given node (Iska naam aur return type theek kiya gaya hai)
void deleteGivenNode(node *temp) {
    // Note: Assuming 'temp' is never the head node as per standard problem structure
    if (temp == nullptr) return;
    
    node *prev = temp->back;
    node *front = temp->next;
    
    if (front == nullptr) { // agar temp tail node hai
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return;
    }
    
    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
}
node *insertionbeforehead(node *head,int val){
    node *temp=new node(val,head,nullptr);
    head->back = temp;
    return temp;
}
node *insertionbeforeend(node *head,int val){
   if(head->next==nullptr){
       return insertionbeforeend(head, val);
   }
    node *tail= head;
   
    while(tail->next!=nullptr){
        tail = tail->next;

    }
    node *prev = tail->back;
    node *newnode = new node(val,tail,prev);
    prev->next = newnode;
    tail-> back= newnode;
    return head;
}
node *beforekelement(node *head,int val,int k){
      if (head == nullptr || k <= 0) {
        return head;
    }

    if (k == 1) {
        return insertionbeforehead(head, val);
    }
    node *temp = head;
    int count = 0;
   
    while(temp!=nullptr){
        count++;
        
        if(count==k){
            break;
          
        }
          temp = temp->next;
      
    }
     if (temp == nullptr) {
        return head;
    }
      
    node *prev = temp->back;
     node *newnode = new node(val, temp, prev);

    
    prev->next = newnode;
    temp->back = newnode;
    return head;
}
void insertbeforenode(node *temp, int val){
    node *prev = temp->back;
    node *newnode = new node(val,temp, prev);
    prev->next = newnode;
    temp->back = newnode;
}

    // Print Linked List
    void print(node *head)
{
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 5, 6, 8, 7};
    node *head = convertArr2LL(arr);
    
    // cout << "Original List: ";
    // print(head);
    
    // cout << "After deleting head: ";
    // head = deleteHead(head);
    // print(head);
    
    // cout << "After deleting end: ";
    // head = deleteFromEnd(head);
    // print(head);

    // cout << "After deleting 1st element: ";
    // head = deleteKthElement(head, 1);
    // print(head);
    
    // cout << "After deleting the given node (head->next): ";
    // // Check if head and head->next exist before calling to prevent segmentation faults
    // if(head != nullptr && head->next != nullptr) {
    //     deleteGivenNode(head->next);
    // }
    // print(head);
    // head = insertionbeforeend(head, 10);
    // print(head);
    // head = beforekelement(head, 10, 5);
    // print(head);
    insertbeforenode(head->next->next, 100);
    print(head);

    return 0;
}