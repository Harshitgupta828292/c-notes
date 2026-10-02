// #include<stdio.h>
// int linearSearch(int arr[],int size,int element){
//     for(int i =0;i< size;i++)
//     {
//         if(arr[i]==element){
//             return i;

//         }
//     }
//     return -1;
// }
// int binarySearch(int arr[],int size,int element){
//     int low,mid,high;
//     low=0;
//     high=size-1;
//     // start searching
//     while(low<=high){
//     mid=(low+high)/2;
//     if(arr[mid]==element){
//         return mid;
//     }
//     if(arr[mid]<element){
//         low=mid+1;
//     }
//     else{
//         high=mid-1;
//     }
//     }
//     // searching ends
//     return -1;
// }
// int main(){

//     int arr[]={1,3,4,5,6,7,8,9,65,3};
//     int size=sizeof(arr)/sizeof(int);
//     int element=65;
//     int searchIndex=binarySearch(arr,size,element);

//     printf("the element %d is present %d \n",element,searchIndex);
//     return 0;
// }
// -------------------------------first and the last occurance -------------------
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={2,8,8,8,8,8,11,13};
    int low = 0;
}