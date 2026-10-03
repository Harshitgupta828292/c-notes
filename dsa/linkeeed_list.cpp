// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     public:
//    int data;
//     node *next;
//     public:
//     node(int data1,node*next1){
//         data = data1;
//         next = next1;
//     }
// };
// node*convertArrtoll(vector<int> &arr){
//     node* head = new node(arr[0],nullptr);
//     node* mover = head;
//     for (int i = 1; i < arr.size();i++){
//         node *temp = new node(arr[i],nullptr);
//         mover->next=temp;
//         mover = temp;

//     }
//     return head;
// }
// int lengthofll(node *head){
//      int count = 0;
      
//        node *temp = head;
//     while (temp != nullptr)
//     {
//         temp = temp->next;
//         count++;
//     }
//     return count;
// }

// int search(node*head,int target){
   
//     node *temp = head;
//    while(temp!=nullptr){
//     if(temp->data==target){
//         return 1;
//     }
//     temp = temp->next;
//     }
//       return 0;
// }
// int main(){
//     vector<int>arr={12,5,8,7};
//     // node *y = new node(arr[0], nullptr);
//     // // if you left new then you are just create a node
//     node *head = convertArrtoll(arr);
//     cout << head->data;
//      node *temp = head;
//     while(temp!=nullptr){
//         cout << temp->data << " ";
//         temp=temp->next;
//     }
//     cout<<lengthofll(head);
//     // length of linked list -----------
    
//     cout << search(head,7);

//     // directly gave the memeory 
//     // if you use class in struct  they work same 
// }
// ----------------inserction and deletion of an element ----------------------------------
#include<bits/stdc++.h>
using namespace std;