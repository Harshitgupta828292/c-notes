// // // // -----------------------sort an array of 0 1 2 like you know
// // // // brute force sort use an n lg n sc 0(n)
// // // // better
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     vector<int> arr = {2, 0, 1};
// // //     int count0 = 0;
// // //     int count1 = 0;
// // //     int count2 = 0;
// // //     int n = arr.size();
// // //     for (int i = 0; i < arr.size(); i++)
// // //     {
// // //         if (arr[i] == 0)
// // //         {
// // //             count0++;
// // //         }
// // //         else if (arr[i] == 1)
// // //         {
// // //             count1++;
// // //         }
// // //         else
// // //         {
// // //             count2++;
// // //         }
// // //     }
// // //     for (int i = 0; i < count0; i++)
// // //     {
// // //         arr[i] = 0;
// // //     }
// // //     for (int i = count0; i < count0 + count1; i++)
// // //     {
// // //         arr[i] = 1;
// // //     }
// // //     for (int i = count0 + count1; i < n; i++)
// // //     {
// // //         arr[i] = 2;
// // //     }
// // //     for (auto st : arr)
// // //     {
// // //         cout << st;
// // //     }
// // // }
// // // ----------------------------------dutch flag algo------------------------
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
// // //     int low = 0;
// // //     int mid = 0;
// // //     int high = arr.size()-1;
// // //     while(mid<=high){
// // //         if(arr[mid]==0){
// // //             swap(arr[low], arr[mid]);
// // //             low++;
// // //             mid++;
// // //         }
// // //         else if(arr[mid]==1){
// // //             mid++;
// // //         }
// // //         else{
// // //             swap(arr[mid], arr[high]);
// // //             high--;
// // //         }


// // //     }
// // //     for(auto st:arr){
// // //         cout << st;
// // //     }
    
// // // }
// // // -------------------------majority element ------------------------
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     vector<int>arr={3,2,3};
// // //     unordered_map<int, int> mpp;

// // //     int  n=arr.size();
// // //     int i = 0;
// // //     int len = 0;
// // //     int majority = 0;

    
    

// // //     for(int i=0;i<n;i++){
// // //         mpp[arr[i]]++;
// // //          if (mpp[arr[i]]>n/2){
// // //             majority = arr[i];
// // //             break;
       
// // //         }
        

// // //         }
// // //         cout << majority ;
// // //         // tc--0(n)
// // //         // sc-0(n)
// // // }
// // // -----------------------------------optimal---------------
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     vector<int> arr = { 7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5 };
// // //     int el ;
// // //     int count = 0;
// // //     for (int i = 0; i < arr.size();i++){
        
// // //         if(count==0){
// // //             count = 1;
// // //             el = arr[i];
// // //         }
// // //         else if(arr[i]==el){
// // //             count++;
// // //         }
// // //         else{
// // //             count--;
// // //         }
// // //     }
// // //     int count1 = 0;
// // //     for (int i = 0; i < arr.size();i++){
// // //         if(arr[i]==el)
// // //             count1++;
// // //     }
// // //     if(count1>(arr.size()/2)){
// // //     cout << el;
// // // }
// // // cout << -1;
// // // }
// // // // tc---0(n)
// // // // sc-0(1)
// // // ------------------kadane algo----------------
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){

// // //     vector<int>arr={-2,-3,4,-1,-2,1,5,-3};
// // //     int len = INT_MIN;

// // //     for (int i = 0; i < arr.size();i++){
// // //         for (int j = i; j < arr.size();j++){
// // //             int sum = 0;
// // //             for (int k = i; k < j;k++){
// // //                 sum += arr[k];
// // //                 len = max(sum, len);
// // //             }
// // //         }
// // //     }
// // //     cout << len;
// // // }
// // // tc-0(n3)
// // // sc--0(1)
// // // ---------------------------better -------------------------------------
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     vector<int>arr={-2,-3,4,-1,-2,1,5,-3};
// // //     int len = INT_MIN;
// // //     for (int i = 0; i < arr.size(); i++)
// // //     {
// // //         for (int j = i; j < arr.size();j++){
// // //             int sum = 0;
           
// // //                 sum += arr[j];
// // //                 len = max(sum, len);
            
// // //         }
// // //     }
// // //     // tc--0(n2)
// // //     cout << len;

// // // }

// // // -----------------------optimal--------------------
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int max = INT_MIN;
// //     int sum = 0;
// //     int len = 0;
// //     int ansstart = -1;
// //     int ansend = -1;
// //     int start = 0;
// //     vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
// //     for (int i = 0; i < arr.size();i++){
// //         if(sum==0){
// //             start = i;
// //         }
        
// //         sum += arr[i];
        
// //         if(sum>max){
// //             max = sum;
// //             ansstart = start;
// //             ansend = i;
// //         }
// //         if(sum<0){
// //             sum = 0;
// //         }
        
// //         // tc-0(n)
// //         // sc-0(1)


// //     }
// //     cout << max;
// //     cout << ansstart;
// //     cout << ansend;
// // }
// // ---------------------buy and sell stocks-----------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>arr={7,1,5,3,6,4};
//     int mini = arr[0];
//     int maxProfit = 0;
//     int n = arr.size();
    
//     for(int i=0;i<arr.size();i++){
//         int cost = arr[i] - mini;
//         maxProfit = max(maxProfit, cost);
//         mini = min(mini, arr[i]);
//     }
//     cout << maxProfit;
// }
// -------------------rearrange array element by sign-----------
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={3,1,-2,-5,2,-4,-5,-6};
    vector<int> nums;
    vector<int> nums2;
    vector<int> ans;

    for (int i = 0;i< arr.size();i++){
        if(arr[i]>0){
            nums.push_back(arr[i]);
                }
        if(arr[i]<0){
            nums2.push_back(arr[i]);
            
        }
       
    }
    if(nums.size()>nums2.size()){
        for (int i = 0; i < nums2.size();i++){
            arr[2 * i] = nums[i];
            arr[2 * i + 1] = nums2[i];
        }
        int index = nums2.size() * 2;
        for (int i = nums2.size(); i < nums.size();i++){
            arr[index] = nums2[i];
            index++;
        }
    }
    else{
        for (int i = 0; i < nums.size();i++){
            arr[2 * i] = nums[i];
            arr[2 * i + 1] = nums2[i];
        } 
        int index = nums.size() * 2;
        for (int i = nums.size(); i < nums.size();i++){
            arr[index] = nums[i];
            index++;
        }

    }
     
    for(auto st:ans){
            cout << st;
        }
    //  tc(2n)
    // 2 pss to 1 pass
    // sc--0(n)
}
// ---------------
// tc-0(n)
// sc-0(n)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr = {3, 1, -2, -5, 2, -4};
    
//     int n = arr.size();
//     int pos=0;
//     int neg = 1;

//     vector<int> nums1(n, 0);
    
//     // n is  size with initial value is 0 this is constructor
//     for (int i = 0; i <n;i++){
//         if(arr[i]>0){
//             nums1[pos] = arr[i];
//             pos += 2;
//         }
//         else{
//             nums1[neg] = arr[i];
//             neg += 2;
//         }
        
//     }
//     for(auto st:nums1){
//         cout << st<<endl;
//     }
// }
// ---------------------alternate order----------
// optimal is  not begst becuase in bruete 

