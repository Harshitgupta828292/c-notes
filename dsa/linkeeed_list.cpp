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
node *deletion_of_node(node *head){
    

    if(head==NULL){
        return head;
    }
        node *temp = head;

 
        head = head->next;
        delete temp;
       

        return head;
}
node *deletetail(node *head){
    if(head==nullptr||head->next==nullptr){
        return nullptr;
    }
    node *temp = head;
    while (temp->next->next !=nullptr)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = nullptr;
    return head;
}
node *deletekelement(node *head,int k){
    if(head==nullptr){
        return head;
    }
    if(k==1){
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count = 0;
    node *temp = head;
    node *prev = nullptr;
    
    
    
    
    while(temp!=nullptr){
        count++;
        if(count==k){
        prev ->next= prev->next->next;
        delete (temp);
        break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
    }
node *insertionto_to_head(node*head,int val){
    node *temp = new node(val, head);
    return temp;
   
}
node *insert_to_last(node *head, int val)
{
    if(head==nullptr){
        return new node(val,nullptr);
    }
    node *temp = head;
    
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    node *newnode = new node(val,nullptr);
    temp-> next = newnode;
    return head;
}
void print(node *head){
    node *temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node *inserting_pos(node *head,int el,int k){
    if(head==nullptr){
        if(k==1){
            return new node(el,nullptr);
        }
        else{
            return head;
        }
    }
    if(k==1){
        return new node(el, head);
       
    }
    
        int count = 0;
        node *temp = head;
        while(temp!=nullptr){
            count++;
            if(count==k-1){
            node *n = new node(el,temp->next);
          
            temp->next = n;
            break;
            }
            temp = temp->next;
        }
       
    return head;

}

node *inserting_beforvalue(node *head,int el,int val){
    if(head==nullptr){
        return new node(el, head);
    }
    if(head->data==val){
        return new node(el, head);
       
    }
    
      
        node *temp = head;
        while(temp!=nullptr){
           
            if(temp->next->data==val){
            node *n = new node(el,temp->next);
          
            temp->next = n;
            break;
            }
            temp = temp->next;
        }
       
    return head;

}


int main(){
    vector<int> arr = {1, 8, 7, 3};
    node *head = convertArrtoll(arr);
    head = deletion_of_node(head);
   
    // cout << head->data;
    head=deletetail(head);
    cout << head->next->data;
    int k = 5;
    head = deletekelement(head, k);
    cout << head->data;
    head = insertionto_to_head(head, 100);
    print(head);
    head = insert_to_last(head,100);
    print(head);
    head=inserting_pos(head,150,3);
    print(head);
    head = inserting_beforvalue(head, 100, 8);
    print(head);
}