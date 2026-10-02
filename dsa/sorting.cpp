// // // // -------------------------------selection sort--------------
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // void selection_sort(int arr[], int n)
// // // {
// // //     for (int i = 0; i <= n - 2; i++)
// // //     {
// // //         int mini = i;
// // //         for (int j = i; j <= n - 1; j++)
// // //         {
// // //             if (arr[j] < arr[mini])
// // //             {
// // //                 mini = j;
// // //             }
// // //         }
// // //         int temp = arr[mini];
// // //         arr[mini] = arr[i];
// // //         arr[i] = temp;
// // //     }
// // // }

// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
    
// // //     int arr[n];
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cin >> arr[i];
// // //         selection_sort(arr, n);
// // //     }
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cout << arr[i] << " ";
// // //     }
// // //     return 0;
// // // }
// // //tc-- n*(n+1)/2 all best wrost 
// // // ----------------------bubble sort--------------------------
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // void bubble_sort(int arr[],int n){
// // //      for (int i = n-1; i >= 1; i--)
// // //     {
// // //         for (int j = 0; j <=i-1;j++){
// // //             if(arr[j]>arr[j+1]){
// // //                 int temp = arr[j + 1];
// // //                 arr[j + 1] = arr[j];
// // //                 arr[j] = temp;
// // //             }
// // //         }
// // //     }
   
// // // }
// // // int main(){
// // //     int n;
// // //     cin >> n;
// // //     int arr[n];
// // //     for (int i = 0; i < n;i++)
// // //         cin >> arr[i];
// // //     bubble_sort(arr, n);
// // //     for (int i = 0; i < n;i++){
// // //         cout << arr[i] << " ";
// // //     }
// // // }
// // // tc--n*(n+1)/2
// // // ------------optimizatiom---------------------------------------
// // //  #include<bits/stdc++.h>
// // // using namespace std;
// // // void bubble_sort(int arr[],int n){
// // //      for (int i = n-1; i >= 1; i--)
// // //     {
// // //         int didSwap = 0;
// // //         for (int j = 0; j <=i-1;j++){
// // //             if(arr[j]>arr[j+1]){
// // //                 int temp = arr[j + 1];
// // //                 arr[j + 1] = arr[j];
// // //                 arr[j] = temp;
// // //                 didSwap = 1;
// // //             }
// // //         }
// // //         if(didSwap==0){
// // //             break;
// // //         }
// // //         cout << "runs\n";
// // //     }

   
// // // }
// // // int main(){
// // //     int n;
// // //     cin >> n;
// // //     int arr[n];
// // //     for (int i = 0; i < n;i++)
// // //         cin >> arr[i];
// // //     bubble_sort(arr, n);
// // //     for (int i = 0; i < n;i++){
// // //         cout << arr[i] << " ";
// // //     }
// // //     // tc--n*(n+1)/2 wrost case 0(n2)
// // //     // best--0(n)
// // // }
// // // --------------------------------------insertion sort ---------------------------
// // #include<bits/stdc++.h>
// // using namespace std;
// // void insertion_sort(int arr[],int n){
// //     for (int i = 0; i <= n - 1;i++){
// //         int j = i;
    
// //         while(j>0 &&arr[j-1]>arr[j]){
// //             swap(arr[j - 1], arr[j]);
// //             j--;
// //             cout << "runs";
// //         }
// //         }
           

// // }
// // int main(){
// //     int n;
// //     cin >> n;
// //     int arr[n];
// //     for (int i = 0; i < n;i++)
// //         cin >> arr[i];
// //     insertion_sort(arr, n);
// //     for (int i = 0; i < n;i++){
// //         cout << arr[i] << " ";
// //     }
// //     return 0;
// // }
// // // best 0(n)

// // // tc---n*(n+1)2
// // --------------------------------------merge sort------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void merge(vector<int>&arr,int low,int mid,int high){
//     vector<int> temp;
//     int left = low;
//     int right = mid + 1;
//     while(left<=mid && right<=high){
//         if (arr[left]<=arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//     while(left<=mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//         temp.push_back(arr[left]);
//         right++;
//     }
//     for (int i = low; i <= high;i++){
//         arr[i] = temp[i - low];
//     }
// }
// void ms(vector<int>&arr,int low,int high){
//     if(low==high)
//         return;
//     int mid = (low + high) / 2;
//     ms(arr, low, mid);
//     ms(arr, mid + 1, high);
//     merge(arr, low, mid, high);
// }
// void mergeSort(vector<int>&arr,int n){
//     ms(arr, 0, n - 1);
// }

// int main(){
//      int n;
//     cin >> n;
//     vector<int> arr(n);

//     for (int i = 0; i < n;i++)
//         cin >> arr[i];
//     mergeSort(arr, n);
//     for (int i = 0; i < n;i++){
//         cout << arr[i] << " ";
//     }
   
// }
// ----------------------------quick sort-------------------
#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot &&i<=high-1){ 
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int ptIndex = partition(arr, low, high);
        qs(arr, low, ptIndex - 1);
        qs(arr, ptIndex + 1, high);
    }
}
vector <int>quickSort(vector<int>arr){
    qs(arr, 0, arr.size() - 1);
    return arr;
}
int main(){
    vector<int>arr = {4, 6, 2, 5, 7, 9, 1, 3};
    arr = quickSort(arr);

    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << "";
    }
    return 0;
}