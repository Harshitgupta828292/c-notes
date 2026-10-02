// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // vector<vector<int>>triplet(int n,vector<int>&arr){

// // // // // //     set<vector<int>> st;

// // // // // //     for (int i = 0; i < n;i++){
// // // // // //         for (int j = i+1; j < n;j++){
// // // // // //             for (int k = j+1; k < n;k++){
// // // // // //                  if(arr[i]+arr[j]+arr[k]==0){
// // // // // //                      vector<int> temp = {arr[i], arr[j], arr[k]};
// // // // // //                      sort(temp.begin(), temp.end());
// // // // // //                      st.insert(temp);
// // // // // //                 }

// // // // // //             }

// // // // // //         }

// // // // // //     }
// // // // // //     vector<vector<int>> ans(st.begin(), st.end());
// // // // // //     return ans;
// // // // // // }
// // // // // // int main(){
// // // // // //     vector<int> arr = {-1, 0, 1, 2, -1, 4};
// // // // // //     int n = arr.size();
// // // // // //     vector<vector<int>>x=triplet(n, arr);
// // // // // //     for(auto l:x){
// // // // // //         for(auto k:l){
// // // // // //             cout << k;
// // // // // //         }
// // // // // //         cout << endl;
// // // // // //     }

// // // // // // }
// // // // // // ------------------------2 -----------------------
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> list;
    vector<int> arr = {-1, 0, 1, 2, -1, 4};
    int n = arr.size();
    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        set<int> hashset;

        for (int j = i+1; j < n;j++){
            int third = -(arr[i] + arr[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int>temp={arr[i],arr[j],third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }

    }
    vector<vector<int>> ans(st.begin(),st.end());
    for(auto x:ans){
        for(auto y:x){
            cout << y;
        }
    }
}
// // // // // ------------------------2 pointer approach----------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr = {-1,0,1,2,-1,-4};
//     vector<vector<int>> ans;
//     int target =2;
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < arr.size();i++){
//         if(i>0 && arr[i]==arr[i-1])
//             continue;
//         int j = i + 1;
//         int k = arr.size() - 1;
//         while(j<k){
//             int sum = arr[i] + arr[j] + arr[k];
//             if(sum<target){
//                 j++;
//             }
//             else if(sum>target){
//                 k--;
//             }
//             else{
//                 vector<int> temp = {arr[i], arr[j], arr[k]};
//                 ans.push_back(temp);
//                 j++;
//                 k--;
//                 while(j<k &&arr[j]==arr[j-1])
//                     j++;
//                 while(j<k && arr[k]==arr[k+1])
//                     k--;

//             }

//         }

//     }
//     for(auto x:ans){
//         for(auto y:x){
//             cout<<y;
//         }
//     }
// }
// // // // // // -------------------------------------------------------4 sum----------brute force----------------------------
// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //     vector<int> arr = {1, 0, -1, 0, -2, 2};
// // // // // //     set <vector <int>> ans;
// // // // // //     for (int i = 0; i < arr.size();i++){
// // // // // //         for (int j = i + 1; j < arr.size();j++){
// // // // // //             for (int k = j + 1; k< arr.size();k++){
// // // // // //                 for (int l = k + 1; l < arr.size();l++){
// // // // // //                     if(arr[i]+arr[j]+arr[k]+arr[l]==0){
// // // // // //                         vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
// // // // // //                         sort(temp.begin(), temp.end());
// // // // // //                         ans.insert(temp);

// // // // // //                     }
// // // // // //                 }
// // // // // //             }
// // // // // //         }
// // // // // //     }
// // // // // //     for(auto x:ans){
// // // // // //         for(auto y:x){
// // // // // //             cout << y;
// // // // // //         }

// // // // // //     }

// // // // // // }
// // // // // // ---------------------------better----------------------------------
// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     vector<int> arr = {1,0,-1,0,-2,2};

// // // // //     set<vector<int>> ans;
// // // // //     int target = 0;
// // // // //     for (int i = 0; i < arr.size();i++){

// // // // //         for (int j = i + 1; j < arr.size();j++){
// // // // //             set<int> hashset;
// // // // //             for (int k = j + 1; k < arr.size();k++){
// // // // //                 long long sum = arr[i] + arr[j];
// // // // //                 sum += arr[k];
// // // // //                 int forth = target - (sum);

// // // // //                 if(hashset.find(forth)!=hashset.end()){
// // // // //                     vector<int> temp = {arr[i], arr[j], arr[k], forth};
// // // // //                     sort(temp.begin(), temp.end());
// // // // //                     ans.insert(temp);

// // // // //                 }
// // // // //                 hashset.insert(arr[k]);
// // // // //             }
// // // // //         }
// // // // //     }
// // // // //      for(auto x:ans){
// // // // //         for(auto y:x){
// // // // //             cout << y;
// // // // //         }
// // // // // }
// // // // // }

// // // // // -------------------------optimal--------------------------
// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     vector<int> arr = {-3,-2,-1,0,0,1,2,3};
// // // //     int target = 0;

// // // //     vector<vector<int>> ans;

// // // //     sort(arr.begin(), arr.end());

// // // //     for (int i = 0; i < arr.size(); i++)
// // // //     {
// // // //         if (i > 0 && arr[i] == arr[i - 1])
// // // //             continue;
// // // //         for (int j = i + 1; j < arr.size(); j++)
// // // //         {
// // // //             if (j != i + 1 && arr[j] == arr[j - 1])
// // // //             {
// // // //                 continue;
// // // //             }

// // // //             int k = j + 1;
// // // //             int l = arr.size() - 1;
// // // //             while (k < l)
// // // //             {
// // // //                 long long sum = arr[i];
// // // //                 sum += arr[j];
// // // //                 sum += arr[k];
// // // //                 sum += arr[l];
// // // //                 if (sum == target)
// // // //                 {
// // // //                     vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
// // // //                     ans.push_back(temp);
// // // //                     k++;
// // // //                     l--;
// // // //                     while (k < l && arr[k] == arr[k - 1])
// // // //                         k++ ;
// // // //                     while (k < l && arr[l] == arr[l + 1])
// // // //                         l--;
// // // //                 }
// // // //                 else if (sum < target)
// // // //                 {
// // // //                     k++;
// // // //                 }
// // // //                 else
// // // //                 {
// // // //                     l--;
// // // //                 }
// // // //             }
// // // //         }
// // // //     }
// // // //     for (auto x : ans)
// // // //     {
// // // //         for (auto y : x)
// // // //         {
// // // //             cout << y;
// // // //         }
// // // //         cout << endl;
// // // //     }
// // // // }
// // // // ------------------------------------------------------------
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main(){
// // // //     vector<int>arr={};
// // // //     vector<int>arr2={};

// // // //     int total_size = arr.size() + arr2.size();
// // // //     vector<int> ans;
// // // //     int i = 0;
// // // //     int j = 0;
// // // //     )
// // // //     for (int k = 0; k <total_size; k++)
// // // //     {
// // // //         if (arr[i] >= arr2[j])
// // // //         {
// // // //             ans.push_back(arr2[j]);
// // // //             j++;
// // // //         }
// // // //         else
// // // //         {
// // // //             ans.push_back(arr[i]);
// // // //             i++;
// // // //         }
// // // //     }
// // // //     for(auto x:ans){
// // // //         cout << x;
// // // //     }
// // // // }


// // // // -----------------find ubet using xor
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     vector<int> arr = {4, 2, 2, 6, 4};
// // //     int xor1 = 0;
// // //     int count = 0;
// // //     int k = 6;
// // //     for (int xor2 = 1; xor2 < arr.size();xor2++){
// // //         vector<int>temp=xor1 ^ xor2;
// // //         if(xor1==k){
// // //             count++;
            
// // //         }
        
// // //     }
    
// // // }
// // // ------------------------------------
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     vector<int>arr={1,3,5,7};
// //     vector<int> arr2 = {0, 2, 6, 8, 9};
    
// //     int n = arr.size();
// //     int m = arr2.size();
// //     long long arr3[n + m];
// //     int left = 0;
// //     int right = 0;
// //     int index=0;
// //     while (left < n && right < m)
// //     {
// //         if (arr[left] <= arr2[right])
// //         {
// //             arr3[index] = arr[left];
// //             left++;
// //             index++;
// //         }
// //         else{
// //             arr3[index] = arr2[right];
// //             right++;
// //             index++;
// //             // array6 goty exauted 
//         }

// }
// while(left<n){
//     arr3[index++] = arr[left++];
// }
// while(right<m){
//     arr3[index++] = arr2[right++];
// }
// for (int i = 0; i < n + m;i++){
//     if(i<n){
//         arr[i] = arr3[i];
        
//     }
//     else{
//         arr2[i - n] = arr3[i];
//     }
// }
// for(auto x:arr3){
//     cout << x;
// }
// }
// ----------------------------better-----------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr = {1, 3, 5, 7};
//     vector<int> arr2 = {0, 2, 6, 8, 9};
//     int n = arr.size();
//     int m = arr2.size();
//     int left = n-1;
//     int right = 0;
//     while(left>=0 && right<m){
//         if(arr[left]>arr2[right]){
//             swap(arr[left], arr2[right]);
//             left--;
//             right++;
//         }
//         else{
//             break;
//         }
        
//     }
//     sort(arr.begin(), arr.end());
//     sort(arr2.begin(), arr2.end());
//     for(int x:arr){
//         cout << x;

//     }
//     for(int x :arr2){
//         cout << x;
//     }
// }
// -------------------------------------------optimal------------------
// #include<bits/stdc++.h>
// using namespace std;
// void swapGreater(long long arr[],int ind1,int ind2){
//     if(arr1[ind1]>arr2[ind2]){
//         swap(arr1[ind1], arr2[ind2]);
//     }
// }
// void merge(long long arr1[].,long long arr2[],int n,int m){
//     int len = (n + m);
//     int gap = (len / 2) + (len % 2);
//     while(gap>0){
//         int left = 0;
//         int right = left + gap;
//         while(right<len){
//             if(left<n &&right>=n){
//                 swapGreater(arr1, arr2, left, right - n);
//             }
//             else if(left>=n){
//                 swapGreater(arr2, arr2, left - n, right - n);
//             }
//             else{
//                 swapGreater(arr1, arr1, left, right);
                
//             }
//             left++, right++;
//         }
//         if(gap==1){
//             break;
//         }
//         gap=(gap/2)+(gap%2);
//     }
// }
// int main(){
//     vector<int> arr1 = {1, 3, 5, 7};
//     vector<int> arr2 = {0, 2, 6, 8, 9};
//     int n = arr1.size();
//     int m = arr2.size();
//     int ind1 = 0;
//     int ind2 = 0;
// }