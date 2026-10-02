
// // // // // ---------------------------------------------
// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // vector<int> nextGreaterpermutation(vector<int>&A){
// // // // //     next_permutation(A.begin(), A.end());
// // // // //     return A;
// // // // // }
// // // // // int main(){
// // // // //     vector<int> A = {1, 2, 3};
// // // // //     vector<int> ans = nextGreaterpermutation(A);
// // // // //    for(int x:ans){
// // // // //        cout << x;
// // // // //    }
// // // // // }
// // // // // -----------------------------------optimal-----
// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // int  main(){
// // // // //     vector<int> arr = {2, 1, 5, 4, 3, 0, 0};

// // // // // }
// // // // // ---------------------
// // // // // -----------------------------------------
// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//    vector<int>nextGreaterPermutation(vector<int>&A){
//        int ind = -1;
//        int n = A.size();
//        for (int i = n - 2; i >= 0;i++){
//         if(A[i]<A[i+1]){
//             ind = i;
//             break;
//         }

//        }
//        if(ind==-1){
//            reverse(A.begin(), A.end());
//            return A;
//        }
//        for (int i= n - 1; i >ind;i--){
//         if(A[i]>A[ind]){
//             swap(A[i], A[ind]);
//             break;
//         }
//        }
//        reverse(A.begin() + ind + 1, A.end());

//        return A;
//    }
   
   
// //    0(3n)
// // sc-0(1)
// };
// int main(){
//     Solution obj;
//     vector<int> A = {1,3,2};
//     obj.nextGreaterPermutation(A);
//     for(int x:A){
//         cout << x;
//     }
    
// }
// // // // ====================================longest common prefix========================
// // // // #include<bits/stdc++.h>
// // // // #include<string>
// // // // using namespace std;
// // // // int main(){
// // // //     vector<string> st = {"flower", "flow", "flight"};

// // // //     string result=st[0];

// // // //     for (int i = 1; i < st.size();i++){
// // // //         string temp = "";
// // // //         for (int j = 0; j <  result.length() &&st[i].length();j++){
// // // //             if(result[j]==st[i][j]){
// // // //                 temp += result[j];

// // // //             }
// // // //             else {
// // // //                 break;

// // // //             }
// // // //         }
// // // //         result = temp;
// // // //     }
// // // //     cout << result;

// // // //     }
// // // // ----------------------------------------------------------------
// // // // leaderof an array-------------------------------
// // // // everything on a right should be smaller
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     vector<int> arr = {10, 22, 12, 3, 0, 6};

    

// // //     int n = arr.size();
// // //     int maxi = INT_MIN;
// // //     vector<int> ans;
// // //     for (int j = n - 1; j >= 0; j--)
// // //     {
// // //         if (arr[j] > maxi)
// // //         {
// // //             ans.push_back(arr[j]);
// // //         }
// // //         maxi = max(maxi, arr[j]);
// // //     }
// // //     sort(ans.begin(), ans.end());
// // //     for (auto st : ans)
// // //     {
// // //         cout << st << " ";
// // //     }
// // // }
// // // --------------------------longet conecutive equence 
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
// //     sort(arr.begin(), arr.end());
// //     int count = 1;
// //     int j = 0;
// //     int l = 1;
// //     for (int i = 1; i < arr.size();i++){
// //         if(arr[i]==arr[i-1]){
            
// //             continue;
            
// //         }
// //         if(arr[i]-arr[i-1]==1){
// //             count++;
            
// //         }
// //        else{
// //             count = 1;
            
// //                 }
// //                 l = max(l, count);
    
// //     }
    
// //     cout << l;
// // }
// // -----------------------------optimal-------------
// // #include<bits/stdc++.h>
// // using namespace std;

// // int longestsuccesiveelement(vector<int>&a){
// //     int n = a.size();
// //     if(n==0){
// //         return 0;
// //         int longest = 1;
// //         unordered_set<int> st;
// //         for (int i = 0; i < n;i++){
// //             st.insert(a[i]);

// //         }
// //         for(auto it:st){
// //             if (st.find(it - 1) == st.end()){
// //                 int count = 1;
// //                 int x = it;
// //                 while(st.find(x+1)!=st.end()){
// //                     x = x + 1;
// //                     count = count + 1;
// //                 }
// //                 longest = max(longest, count);
// //             }
// //             // 0(n)+0(N)===3n,sc--0(n) while is not n there because of small iteration 3 iteration 4 iteration
// //         }
// //     }
// // }