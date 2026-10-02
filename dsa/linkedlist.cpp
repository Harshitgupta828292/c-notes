// #include<bits/stdc++.h>
// using namespace std;
// struct  node{
//     int data;
//     struct node *next;
// }*first = nullptr, *last = nullptr;
//     // global pointer
// void create(int a[],int n){
//     if (n <= 0) {
//         first = last = nullptr;
//         return;
//     }

//     struct node *t;
//     first = new node;
//     first->data = a[0];
//     first->next = nullptr;
//     last = first;
//     // because 0 element is crwater 
//     for (int i = 1; i < n;i++){
//         t = new node;
//         t->data = a[i];
//         t->next = nullptr;
//         last->next = t;
//         last = t;
//     }
// }
// void display(struct node *p){
//    while(p!=0){
//         cout<<(p->data)<<endl;
//         p=p->next;
//     }
// }
// // length of a linked list;
// void length(struct node *p){
//     int count = 0;
//     while(p!=0){
//         count++;
//         p = p->next;
        
//     }
//     cout << "count :"<<count<<endl;
// }
// void summ(struct node *p){
//     int sum = 0;
//     while(p!=0){
//         sum += p->data;
//         p = p->next;
//     }
//     cout <<"sum"<< sum<<endl;
// }
// struct node* linearsearch(struct node* p, int key){
   
//     while(p!=0){
//         if(key==p->data){
//             return p;
//         }
//         p=p->next;
        
//     }
//     return nullptr;
// }
// void maximum(struct node* p){
//     int maximum = INT_MIN;
//     while(p!=0){
//         if(p->data>maximum){
//             maximum = p ->data;
//         }
//         p = p->next;
//     }
//     cout << "maximum: " << maximum << endl;
// }
// void insertion(struct node* p, int x, int pos){
//     if(pos==0){
//         node* t = new node;
//         t->data = x;
//         t->next = first;
//         first = t;
//         if (last == nullptr) {
//             last = t;
//         }
//     }
//     else if(pos>0){
//         for(int i = 0; i < pos - 1 && p != nullptr; i++){
//             p = p->next;
//         }
//         if(p != nullptr){
//             node* t = new node;
//             t->data = x;
//             t->next = p->next;
//             p->next = t;
//             if (t->next == nullptr) {
//                 last = t;
//             }
//         }
//     }
// }
// void insert(int x){
//     node *t=new node;
//     t->data=x;
//     t->next = nullptr;
//     if(first==nullptr){
//         first = last = t;
//     }
//     else{
//         last->next = t;
//         last = t;
//     }
// }
// int delete_node(struct node *p,int pos){
//     // delete the first node
//     struct node *q = nullptr;
    
//     int x = -1;
//     if(pos<1 || p==nullptr){
//         return -1;
//     }
//     if(pos==1){
//         q = first;
//         x = first->data;
       
//         first = first->next;
//         delete q;
//         return x;
//     }
//     else{
   
   
//         for (int i = 0; i < pos - 1 ;i++){
//             q = p;
//             p = p->next;
//         }
//         if(pos){

//             q->next = p->next;
//             x = p->data;
//             delete p;
//             return x;
//         }

//     }
// }
// void sortedinsert(struct node *p,int x){
//     node *t = new node;
//     node *q = nullptr;
//     t->data = x;
//     t->next = nullptr;
//     if(first==nullptr){
//         first = t;
//         last = t;
//     }
//     else{
//         while(p&&p->data<x){
//             q = p;
//             p = p->next;
//         }
//         if(p==first){
//             t->next = first;
//             first = t;
//         }
//         else{
//             t->next = q->next;
//             q->next = t;
//         }
//         if (t->next == nullptr) {
//             last = t;
//         }
//     }
// }

// int main(){
//     int a[] = {3, 5, 7, 10, 15};
//     int n = sizeof(a)/sizeof(a[0]);
//      int key = 7;
//     create(a, n);
//     display(first);
//     length(first);
//     summ(first);
//     maximum(first);
//     struct node *result = linearsearch(first, 10);
//    if (result){
//        cout << "key is found: " << result->data << endl;

//    }
//    else{
//        cout << "key is not found" << endl;
//    }

//    insertion(first, 5, 20);
//    insertion(first, 4, 25);
//    sortedinsert(first,10);
//    display(first);

//    return 0;
// }