// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // int main() {

// // //     vector<int> arr = {1,2,3,5};

// // //     int n = 5;   // numbers are from 1 to 5

// // //     for(int i=1;i<=n;i++){

// // //         int flag=0;

// // //         for(int j=0;j<arr.size();j++){

// // //             if(arr[j]==i){
// // //                 flag=1;
// // //                 break;
// // //             }
// // //         }

// // //         if(flag==0){
// // //             cout<<i;
// // //             return 0;
// // //         }
// // //     }
// // // }

// // // tc--0(n*n)
// // // sc--0(n)
// // // -------------------optimize----------
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin >> n;
// //     int arr[n];
// //     for (int i = 0; i < n;i++){
// //         cin >> arr[i];
// //     }
// //     int hash[n+1] = {0};
// //     for (int i = 0; i < n;i++){
// //         hash[arr[i]]=1;
        
// //     }
// //     for (int i = 1; i < n;i++){
// //         if(hash[i]==0){
// //             cout << i;

// //         }
// //     }
// // }

// // -------------------sum--------------------
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     vector<int> arr = {1, 2, 4, 5};
// //     int n = arr.size()+1;
// //     int count = 0;
// //     int sum = n * (n + 1) / 2;
// //     for (int i = 0; i < n-1;i++){
// //         count+=arr[i];
// //     }
    
// //     int output = sum - count;
// //     cout << output;
// // }
// // tc--0(n)
// // sc--0((1))
// // --------------------------xor-------------------
// // #include<bits/stdc++.h>
// // using namespace std;
// // int misssingNUmber(vector<int>a,int N){
// //     int XOR1 = 0;
// //     int XOR2 = 0;
// //     int n = N - 1;
// //     for (int i = 0; i < n;i++){
// //         XOR2 = XOR2 ^ a[i];
// //         XOR1 = XOR1 ^ (i + 1);
// //     }
// //     XOR1 = XOR1 ^ N;
// //     return XOR1 ^ XOR2;
// // }
// // int main(){
// //     vector<int> a = {1,3,4,5};
// //     int N = a.size();
// //   cout<<  misssingNUmber(a, N);
// // }
// // 0(n)
// // apprantely this is better 10^5*(10^5+1)/2
// // then you need long data type this is better because its exceeed 10^10
// // -------------------------------maximum consecutive once -----------
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     vector<int>arr={1,1,0,1,1,1,0,1,1};
// //     int count = 0;
// //     int maxi = 0;
// //     for (int i = 0; i < arr.size();i++){
// //         if(arr[i]==1){
// //             count++;
// //             maxi = max(maxi, count);
// //         }
// //         if(arr[i]==0){
// //             count = 0;
// //         }
// //     }
// //     cout << maxi;
// // }
//     // tc---0(N)
//     // --------------find the number ythat appear once and the other number twice 
// // brute force you have to go likwe a linear search 
// // but for like better we use hashing 
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
    
// //     vector<int> arr = {1, 1,2, 2, 3, 4, 4};
// //     int maxi = arr[0];
// //      int n = arr.size();
// //     for (int i = 0; i < n;i++){
// //         maxi = max(maxi, arr[i]);
// //     }
       
// //     int hash[maxi] = {0};
// //     for (int i = 0; i < n;i++){
// //         hash[arr[i]]++;
       

// //     }
// //     for (int i = 0; i < n;i++){
// //          if(hash[arr[i]]==1){
// //             cout << arr[i];
// //             break;
            
// //         }
// //     }
// // }
// // if array has negative like array has bigger number in that case you can noot use hashing you have to use map dayta structur  like 10^9 
// // sc-- 0(maxi);
// // depend on input
// // sc---0(n)

// // =================================optimal===========================

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     vector<int> arr = {1, 2, 3, 1, 3};
// //     map<int, int> mpp;
// //     int n = arr.size();
// //     for (int i = 0; i < n;i++){
// //         mpp[arr[i]]++;
// //     }
// //     for(auto it:mpp){
// //         if(it.second==1){
// //             cout << it.first;
// //         }
// //         // mapme n log n hota  h for hive data n/2 me stor +1 j0 unique h 
// //     // }tc--nlogn+0(n/2+1)
// //     // sc--0(n/2+1)
// // if you can use unorder map it ca be o(n)
// // }------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>arr={1,1,2,3,3,4,4};
//     int n = arr.size();
//     int XOR = 0;
//     for (int i = 0; i < n;i++){
//         XOR = XOR ^ arr[i];
//     }
//     cout << XOR;
//     // tc-0(n)
//     // sc--0(1)
// }
// ---------------------------------------------------------------------------------
// longest subarray-----------------------------------------
// longest subarray with given sum
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums = {1, 2, 3};
//     int k = 2;
//     int len = 0;
    
//     for (int i = 0; i < nums.size();i++){
//         for (int j = i; j < nums.size();j++){
//             int sum = 0;
//             for (int k = i; k <=j;k++){
//                 sum += nums[k];
//             }
//                 if(sum==k)
//                     len = max(len, j - i + 1);
            
            
//         }
        
//     }
//     cout << len;
// }
// tc--0(n3)
// sc---0(1)
// -------------------------------------------------bette--------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr = {1, 2, 3, 1, 1, 1, 4, 2, 3};
//     int k = 3;
//     int len = 0;
//     for (int i = 0; i < arr.size();i++){
//         int sum = 0;
//         for (int j = i; j < arr.size();j++){
//             sum += arr[j];
//             if(sum==k){
//                 len = max(len, j - i + 1);
//             }
//         }
//     }
//     cout << len;
// }
// ---------------------------------optimal-------
// hashing 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    long long sum = 0;
    int maxLen = 0;
    map<long long, int> premap;
    ;
    int k = 3;
    for (int i = 0; i < arr.size();i++){
        sum += arr[i];
        if(sum==k){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(premap.find(rem)!=premap.end()){
            int len = i - premap[rem];
            maxLen = max(maxLen, len);
            

            
        }
        if(premap.find(sum)==premap.end()){
          {
              premap[sum] = i;
            }
        }
    }
    cout << maxLen;
    // that code is for positive not negatiove or 0 
    // if there exist a subarray with sum k as . as the last eleement 
    
}
// it is better one not optima l for optimal
// if we use  ordered map its tiime comp is 0(nlgm) if we use un ordder which is 0(n)
// sc--0(n) because all prefix sum store 
// --------------------total subarray sum
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int total_count = 0; // Total kitne subarray mile
//         long long sum = 0;
        
//         // Map ab <sum, frequency> store karega
//         map<long long, int> mpp; 
        
//         // Base case: Sum 0 shuru mein ek baar (1 time) exist karta hai
//         mpp[0] = 1; 
        
//         for(int i = 0; i < nums.size(); i++){
//             sum += nums[i]; // Current sum
            
//             long long rem = sum - k;
            
//             // Agar 'rem' map mein hai, toh uski frequency ko total_count mein jod do
//             if(mpp.find(rem) != mpp.end()){
//                 total_count += mpp[rem];
//             }
            
//             // Current sum ki frequency map mein badha do
//             mpp[sum]++; 
//         }
        
//         return total_count;
//     }
// };
// ----------------------------------------------------------------------

// for optimal we use 2 pointer  approach 
// to find max sum
// go trim for the left 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 3, 3};
//     long long sum = arr[0];
    
//     int left = 0;
//     int right = 0;
//     int maxlen = 0;
//     long long k = 6;
//     int n = arr.size();
//     while(right<n){
//         // 0(n)
//         while(left<=right && sum>k){
//             // 0(n)its overall 
//             sum -= arr[left];
//             left++;
//         }
//         if(sum==k){
//             maxlen = max(maxlen, right - left + 1);
//         }
//         right++;

//         if (right < n)
//             sum += arr[right];
//     }
//     cout << maxlen;
// }
// tc--0(2n)
// inwrost case 
// sc--0(1)
// not 0(n2)
// tcin wrost case 0(2n)
