// // // // // // // // #include<bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // int main(){
// // // // // // // //    vector<int> arr = {3, 2, 1, 5, 3};
// // // // // // // //    int minimum = arr[0];
// // // // // // // //    for (int i = 1; i < arr.size(); i++){
// // // // // // // //     if(arr[i]>minimum){
// // // // // // // //         minimum = arr[i];
// // // // // // // //     }
    
// // // // // // // // }
// // // // // // // // cout << minimum;
// // // // // // // // }
// // // // // // // // ----------------------but when you sorting an aggo by qquick sort or merge you find his tc array last element will be largest 
// // // // // // // // ------------------------------------------------------
// // // // // // // #include<bits/stdc++.h>
// // // // // // // using namespace std;
// // // // // // // int main(){
// // // // // // //     vector<int> arr = {3, 2, 1, 5, 2,5,4,54,3,3,6,46};
// // // // // // //     int first_element = arr[0];
// // // // // // //     int second_element = -1;
// // // // // // //     for (int i = 1; i < arr.size();i++){
// // // // // // //         if(arr[i]>first_element){
// // // // // // //             first_element = arr[i];
            
// // // // // // //                 }
// // // // // // //     }
// // // // // // //     cout << first_element << endl;
// // // // // // //     for (int i =0;i<arr.size();i++){
// // // // // // //         if( arr[i]>second_element && arr[i]!=first_element){
// // // // // // //         second_element = arr[i];
        
// // // // // // //         }

// // // // // // //     }
// // // // // // //     cout << second_element << endl;
// // // // // // // }
// // // // // // // you can also sort and n-2 f!-second
// // // // // // // -----------------------------------------------
// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //     // it can not take negative number
// // // // // //     vector<int>arr = {1, 2, 4, 7, 7, 5,463278,73821,42};
// // // // // //     int largest = arr[0];
// // // // // //     int second_largest = -1;
// // // // // //     for (int i = 0; i < arr.size();i++){
// // // // // //         if(arr[i]>largest){
// // // // // //             second_largest = largest;
// // // // // //             largest = arr[i];
            
        
// // // // // //     }
// // // // // //     else if(arr[i]<largest && arr[i]>second_largest){
// // // // // //         second_largest = arr[i];
// // // // // //     }

// // // // // // }
// // // // // // cout << largest << endl;
// // // // // // cout << second_largest << endl;
// // // // // // }
// // // // // // -------------------------optimal-------------------------------------------------
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int secondLargest(vector<int>&a,int n){
// // // //     int largest = a[0];
// // // //     int s_largest = -1;
// // // //     for (int i = 1; i < n;i++){
// // // //         if(a[i]>largest){
// // // //             s_largest = largest;
// // // //             largest = a[i];
// // // //         }
// // // //         else if(a[i]<largest && a[i]>s_largest){
// // // //             s_largest = a[i];
// // // //         }
// // // //     }
// // // //     return s_largest;
// // // // }
// // // // int secondSmallest(vector<int>&a,int n){
// // // //     int smallest = a[0];
// // // //     int ssmallest = INT_MAX;
// // // //     for (int i = 1; i < n;i++){
// // // //         if(a[i]<smallest){
// // // //             ssmallest = smallest;
// // // //             smallest = a[i];

// // // //         }
// // // //         else if(a[i]!=smallest && a[i]<ssmallest){
// // // //             ssmallest = a[i];
// // // //         }

// // // //     }
// // // //     return ssmallest;
// // // // }
// // // // vector<int>getSecondorder(int n,vector<int>a){
// // // //     int slargest = secondLargest(a, n);
// // // //     int ssmallest = secondSmallest(a, n);
// // // //     return {slargest, ssmallest};
    
// // // // }
// // // // int main(){
// // // //     vector<int> a = {4, 2, 1, 4, 2, 4, 5, 3, 6, 7};
// // // //     int n = a.size();
// // // //     vector<int> ans=getSecondorder(n, a);
// // // //     cout << ans[0];
// // // //     cout << ans[1];

// // // //     return 0;
// // // // }
// // // // // // 0(n) ===tc not for negative number 
// // // // // --------------------------check if the array is sorted------------
// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // bool Sorted(vector<int>& arr,int n){
    
// // // // //     for (int i = 1; i < n;i++){
// // // // //         if(arr[i]>=arr[i-1]){
           
// // // // //         }
// // // // //         else{
// // // // //             return false;
// // // // //         }
// // // // //     }
// // // // //     return true;
// // // // // }
// // // // // int main(){
// // // // //     vector<int> arr = {1, 2, 3, 4};
// // // // //     int n = arr.size();
// // // // //     cout<<boolalpha<<Sorted(arr, n);
// // // // //     return 0;
// // // // // }
// // // // // -------------------------------------remove duplicate in a place from an sorted aray 
// // // #include<bits/stdc++.h>
// // // // brute
// // // using namespace std;
// // // int main(){
// // //     set<int> st;

// // //     vector<int> arr = {1, 1, 2, 2, 2, 3, 3, 3};
    
// // //     for (int i = 0; i < arr.size();i++){
// // //         st.insert(arr[i]);
        
// // //     }
// // //      int index = 0;
// // //     for(auto it:st){
// // //         arr[index] = it;
// // //         index++;
// // //     }
// // //     cout << index << endl;
// // //     for (int i = 0; i < index;i++){
// // //         cout << arr[i]<<" ";
// // //     }
// // //     cout <<endl;
// // //     return 0;
// // // }
// // // // // tc--nlog n for insert for 0(m for auto 
// // // // // )0(n sc)
// // // // ===========================================2 pointer  approach =====remove duplicate in place from a sorted array=´´´´´´´´´´´´´´´´´´
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main(){
// // // //     vector<int> arr = {1, 1, 2, 2, 2, 3, 3};
// // // //     int n = arr.size();
// // // //     int i = 0;
// // // //     for (int j = 1; j < n;j++){
// // // //         if(arr[i]!=arr[j]){
// // // //             arr[i + 1] = arr[j];
// // // //             i++;
// // // //         }
// // // //     }
// // // //     cout << i + 1;
// // // // }
// // // // tc--0(n0) and sc--0(1)
// // // -----------------------------------dsa series question  no `19 -----
// // // -------------------------left rotate an array by 1 place ----------------
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     vector<int> arr = {1, 2, 3, 4, 5};
// //     int n = arr.size();
// //     int temp = arr[0];
// //     for (int i = 1; i < n;i++){
// //         arr[i-1] = arr[i];
// //     }
// //     arr[n - 1] = temp;
// //     for (int i = 0; i < n;i++){
// //         cout << arr[i];
// //     }
// // }
// // // tc--0(n)
// // // sc-0(1)
// // ----------------------------------------------------------------
// // #include<bits/stdc++.h>
// // #include<iostream>
// // using namespace std;
// // void leftRotate(int arr[],int n,int d){
// //     d = d % n;
// //     int temp[d];
// //     for (int i = 0; i < d;i++){
// //         temp[i] = arr[i];
// //     }
// //     for (int i = d; i < n;i++){
// //         arr[i - d] = arr[i];
// //     }
// //     for (int i = n - d; i < n;i++){
// //         arr[i] = temp[i - (n - d)];
// //     }
    
// // }
// // int main(){
// //     int n;
// //     cin >> n;
// //     int arr[n];
// //     for (int i = 0; i < n;i++){
// //         cin >> arr[i];
// //     }
// //     int d;
// //     cin >> d;
// //     leftRotate(arr, n, d);
// //     for (int i = 0; i < n;i++){
// //         cout << arr[i] << " ";
// //     }
// //     return 0;
// // }
// // tc=0(d)+(n-d)+0(d)
// // sc--0(d) because  of temp arr
// // -----------------------------------------------------------------------------------
// // #include<bits/stdc++.h>
// // #include<iostream>
// // using namespace std;


// // void leftreverse(int arr[],int d,int n){
// // reverse(arr, arr+d);
// // reverse(arr + d, arr + n);
// // reverse(arr, arr + n);
// // }
    

// // int main(){
// //     int n;
// //     cin >> n;
// //     int arr[n];
// //     for (int i = 0; i < n;i++){
// //         cin >> arr[i];
// //     }
// //     int d;
// //     cin >> d;
// //     leftreverse(arr, n, d);
// //     for (int i = 0; i < n;i++){
// //         cout << arr[i]<<" ";
// //     }
// //     return 0;
// // }
// // tc--0(2n)
// // sc--0(1)
// // -------------------------------------------------
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void rightreverse(int arr[],int d,int n){
//     d = d % n;
//     reverse(arr+(n - d), arr+n);
//     reverse(arr,arr+(n-d));
//     reverse(arr, arr + n);
// }
//     int main()
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int d;
//         cin >> d;
//         rightreverse(arr,d,n);
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         return 0;
//     }
// --------------------move all the zeroes to the front of array for end loop ++ kro formet ----------
// optimal 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    vector < int> arr = {0,1,0,3,12};
//    int n = arr.size();
//    int i = 0;
   
//    for(int j = 0; j<n;j++){
//     if(arr[j]!=0){
        
        
//         swap(arr[i],arr[j]);
//         i++;
//         }
        
//    }
//    for (int x:arr){
//        cout << x<<" ";
//    }
// }
// -----------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> moveZeroes(int n,vector<int> a){
//     vector<int> temp;
//     for (int i = 0; i < n;i++){
//         if(a[i]!=0){
//             temp.push_back(a[i]);
//         }
//     }
//     int nz = temp.size();
//     for (int i = 0; i < nz;i++){
//         a[i] = temp[i];
//     }
//     for (int i = nz; i < n;i++){
//         a[i] = 0;
//     }
//     return a;
// }
// int main(){
//     vector<int> a = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
//     int n = a.size();
//     a=moveZeroes(n, a);
//     for(int x:a){
//         cout << x;
//     }
    
// }
// ----------------------optimal striver approach ----------no self swwap 
// #include<bits/Stdc++.h>
// using namespace std;
// int main(){
//     vector<int> a = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
//     int n = a.size();
//     int j = -1;
//     for (int i = 0; i < n;i++){
//         if(a[i]==0){
//             j = i;
//             break;
//         }
//     }
//     if(j==-1){
//     for(int x:a)
//         cout << x << " ";
//         return 0;
// }
//     for (int i = j + 1; i < n;i++){
//         if(a[i]!=0){
//             swap(a[i], a[j]);
//             j++;
//         }


//     }
//     for(int x:a)
//         cout << x;
//     return 0;
// }
// --------------------------------linear search----------
// #include<bits/Stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr = {1, 4, 2, 4, 5, 3, 5, 3, 4};
//     int m = 4;
//     for (int i = 0; i < arr.size();i++){
//         if(arr[i]==m){
//             cout <<i<<endl;
//         }

//     }
    
// }
// ---------------find the  union and intersection to an array---
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr1 = {1, 1, 2, 3, 4, 5};
//     vector<int> arr2 = {2, 3, 4, 4, 5};
//     set<int> st;
//     for (int i = 0; i < arr1.size();i++){
//         st.insert(arr1[i]);
        
//     }
//     for (int i = 0; i < arr2.size();i++){
//         st.insert(arr2[i]);
//     }
//     vector<int> temp;
//     for(auto it:st){
//         temp.push_back(it);
//     }
//     for(int x:temp){
//         cout << x;
//     }
//     return 0;
// }
// tc---(n1lgn)+(n2lg(n))+o(n
// sc--0(n1+n2)  n2 for retrn the answer
// -----------------------------optimaltake avantage of sorting -------------------------
// #include<bits/stdc++.h>
// using namespace std;
// vector<int>sortedArray(vector<int>a,vector<int>b){
//     int n1 = a.size();
//     int n2 = b.size();
//     int i = 0;
//     int j = 0;
//     vector<int> unionArr;
//     while(i<n1 && j<n2){
//         if(a[i]<=b[j]){
//             if(unionArr.size()==0||unionArr.back()!=a[i]){
//                 unionArr.push_back(a[i]);
                
//             }
//             i++;
//         }
//         else{
//             if(unionArr.size()==0|| unionArr.back()!=b[j]){
//                 unionArr.push_back(b[j]);
//             }
//             j++;
//         }
//     }
//     while(j<n2){
//         if(unionArr.size()==0||
//     unionArr.back()!=b[j]){
//             unionArr.push_back(b[j]);
//     }
//     j++;
//     }
//     while(i<n1){
//         if(unionArr.size()==0||
//     unionArr.back()!=a[i]){
//             unionArr.push_back(a[i]);
//     }
//     i++;
//     }
//     return unionArr;
// }

// int main(){
//     vector<int> a = {1, 1, 2, 3, 4, 5};
//     vector<int> b = {2, 3, 4, 4, 5};
//     vector<int> ans = sortedArray(a, b);
//     for(int x:ans){
//         cout << x << " ";
//     }
// }
// tc---0(n1+n2)
// sc----0(n1+n2)
// for returning
// -----------------------(optimal)interserction of 2 sorted an array -----------
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> nums2 = {2, 3, 3, 4, 5, 6, 6, 7};
    set<int> st;
    int i = 0;
    int j = 0;
    while (i < nums.size() && j<nums2.size()){
        if(nums[i]<nums2[j]){
            i++;
        }
        else if(nums2[j]>nums[i]){
            j++;
        }
        else{
            st.insert(nums[i]);
            i++;
            j++;
        }
    }
        for (int x : st)
        {
            cout << x;
        }
}
// tc---0(n1+n2)
// sc0(1)
// --------------brute for intersection------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> n1={1,2,3,4};
//     vector<int> n2 = {0, 1, 2, 3, 4};
//     vector<int> ans;
//     int m = n2.size();
//     int n = n1.size();
//     int vis[m] = {0};
//     for (int i = 0; i < n;i++){
//         for (int j = 0; j < m;j++){
//             if(n1[i]==n2[j] &&vis[j]==0 ){
//                 ans.push_back(n1[i]);
//                 vis[j] = 1;
//                 break;
//             }
//             if(n2[j]>n1[i])
//                 break;
//         }
//     }
//     for(int x:ans){
//         cout << x;
//     }
    
// }