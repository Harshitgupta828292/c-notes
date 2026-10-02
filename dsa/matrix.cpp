// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //     int row;
// // // // // //     int column;
// // // // // //     int like;
// // // // // //     int dislike;
// // // // // //     cin >> row;
// // // // // //     cin >> column;
// // // // // //     vector < vector<int>>arr(row, vector<int>(column));
// // // // // //     for(int i=0;i<row;i++){
// // // // // //         for (int j = 0; j < column ;j++){
// // // // // //             cin>>arr[i][j];
// // // // //             if(arr[i][j]==0)
// // // // // //                 like = i;
// // // // // //                 dislike = j;
// // // // // //             }
// // // // // //             else if(i==like || i==dislike || j==like || j==dislike ){
// // // // // //                 arr[i][j] = 0;
// // // // // //             }

// // // // // //             }    }

// // // // // // }
// // // // // // --------------nxt easy-----------
// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //     vector<int> nums = {1,1,2};
// // // // // //     set<int> myset;
// // // // // //     for (int i = 0; i < nums.size();i++){
// // // // // //         myset.insert(nums[i]);
// // // // // //     }
// // // // // //     cout << myset.size();
// // // // // // }
// // // // // // ------------------set matrix------
// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // void modeRow( vector<vector<int>>&arr,int i,int m){
// // // // //     for (int j = 0; j < m;j++){
// // // // //         if(arr[i][j]!=0){
// // // // //             arr[i][j] = -1;
// // // // //         }
// // // // //     }

// // // // // }
// // // // // int modCol(vector<vector<int>>&arr,int j,int n){
// // // // //     for (int i = 0; i < n;i++){
// // // // //         if(arr[i][j]!=0){
// // // // //             arr[i][j] = -1;
// // // // //         }
// // // // //     }
// // // // // }

// // // // // int main(){
// // // // //     vector<vector<int>> arr = {{1, 3, 4}, {1, 0, 1},{1, 1, 1}};
// // // // //     int n = arr.size();
// // // // //     int m = arr.size();
// // // // //     for (int i = 0; i < n;i++){
// // // // //         for (int j = 0; j < m;j++){
// // // // //             // n*m
// // // // //             if(arr[i][j]==0){
// // // // //                 modeRow(arr,i,n);
// // // // //                 modCol(arr,j,m);
// // // // //             }
// // // // //         }
// // // // //     }
// // // // //     for (int i = 0; i < n;i++){
// // // // //         for (int j = 0; j < m;j++){
// // // // //             if(arr[i][j]==-1){
// // // // //                 arr[i][j] = 0;
// // // // //             }
// // // // //         }
// // // // //     }
// // // // //         for (int i = 0; i < n; i++)
// // // // //         {
// // // // //             for (int j = 0; j < m; j++)
// // // // //             {
// // // // //                 cout << arr[i][j];
// // // // //             }
// // // // //             cout << endl;
// // // // //         }
// // // // // }
// // // // // // tc--n*m*(n+m)
// // // // // ------------------matrix-------------------------------
// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int col = 1;
// // // //     vector<vector<int>> arr = {{1, 3, 4}, {1, 0, 1}, {1, 1, 1}};
// // // //     int n = arr.size();
// // // //     int m = arr.size();
// // // //     int col0 = 1;
// // // //     for (int i = 0; i < n;i++){
// // // //         for (int j = 0; j < m;j++){
// // // //             if(arr[i][j]==0){
// // // //                 arr[i][0] = 0;
// // // //                 if(j!=0){
// // // //                     arr[0][j] = 0;
// // // //                 }
// // // //                 else{
// // // //                     col0 = 0;
// // // //                 }
// // // //             }
// // // //         }

// // // //     }
// // // //     // col
// // // //     for (int i= 1; i < n;i++){
// // // //         for (int j = 1; j < m;j++){
// // // //             if(arr[i][j]!=0){
// // // //                 if(arr[0][j]==0||arr[i][0]==0){
// // // //                     arr[i][j] = 0;
// // // //                 }
// // // //             }
// // // //         }
// // // //     }
// // // //     if(arr[0][0]==0){
// // // //         for (int j = 0; j < m;j++){
// // // //             arr[0][j] = 0;
// // // //         }
// // // //         if(col0==0){
// // // //             for (int i = 0; i < n;i++){
// // // //                 arr[i][0] = 0;
// // // //                 // tc(n*m)
// // // //                 // sc=(1)
// // // //             }
// // // //         }
// // // //     }
// // // // }
// // // // ------------------------------rotate matrix by 90----------------
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main(){
// // // //     vector<vector<int>> matrix= {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    
// // // //     int n = matrix.size();
// // // //     vector<vector<int>> ans(n, vector<int>(n));

// // // //     for (int i = 0; i < n;i++){
// // // //         for (int j = 0; j < n;j++){
// // // //             ans[j][n - 1 - i] = matrix[i][j];
// // // //         }
// // // //     }
// // // //     for(auto st:ans){
// // // //         for(auto x:st){
// // // //             cout << x;
// // // //         }
// // // //         cout << " ";
// // // //     }
// // // // }
// // // // ---------------------- optimal --------------
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main(){
// // // //     vector<vector<int>>matrix={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
// // // //     int n = matrix.size();
// // // //     for (int i = 0; i < n - 1;i++){
// // // //         for (int j = i + 1; j < n ;j++){
// // // //             swap(matrix[i][j], matrix[j][i]);
// // // //         }
// // // //     }
// // // //     for (int i = 0; i < n;i++){
// // // //         reverse(matrix[i].begin(), matrix[i].end());
// // // //     }
// // // //     for(auto st:matrix){
// // // //         for(auto x:st){
// // // //             cout << x;
// // // //         }
// // // //     }
// // // // }
// // // // -----------------------------spiral matrix-----------
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     vector<vector<int>> matrix = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
// // //     int n = matrix.size();
// // //     int m = matrix[0].size();
// // //     int top=0;
// // //     int bottom = m
// // // -1;
// // //     int left = 0;
// // //     int right = n-1;
// // //     vector<int> ans;
// // //     while(top<=bottom &&left<=right){
// // //     for (int i = left; i <= right;i++){
// // //         ans.push_back(matrix[top][i]);
        
// // //     }
// // //     top++;
// // //     for (int i = top; i <=bottom;i++){
// // //         ans.push_back(matrix[i][right]);
// // //     }
// // //     right--;
// // //     if(top<=bottom){
// // //     for (int i = right; i >=left;i--){
// // //         ans.push_back(matrix[bottom][i]);
// // //     }
// // //     bottom--;
// // // }
// // // if(left<=right){
// // //     for (int i = bottom; i >= top;i--){
// // //         ans.push_back(matrix[i][left]);
// // //     }
// // //     left++;
// // //     }
// // // }
    
// // //     for(auto st:matrix){
// // //         for(auto x:st){
// // //             cout << x;
// // //         }
// // //     }

// // // }
// // // -----------------------number of sub array with sum k
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     int count = 0;
// // //     vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    
// // //     int k = 3;
   
// // //     for (int i = 0; i < arr.size()-1;i++){
// // //         for (int j = i; j < arr.size();j++){
// // //             int sum = 0;
// // //             for (int k = i; k <=j;k++){
// // //                 sum = sum + arr[k];
               
// // //             }
// // //              if(sum==k){
// // //                 count++;
// // //             }
            
// // //         }
// // //     }
// // //     cout << count;
// // // }
// // // ----------------better----------
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //    
// // //  int count = 0;
// // //     vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
// // //     int k = 3;
// // //     for (int i = 0; i < arr.size()-1;i++){
// // //         int sum = 0;
// // //         for (int j = i; j < arr.size();j++){
// // //             sum += arr[j];
// // //             if(sum==k){
// // //                count++;
// // //         }
// // //         }
       
// // //     }
// // //     cout << count;
// // // }
// // // --------------optimal-----
// // // store 0 first 
// // // arr[]=[3,-3,1,1,1] do that 
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     vector<int>arr={1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
// // //     map<int, int> mpp;
// // //     mpp[0] = 1;
// // //     int k = 3;
// // //     int prefix_sum=0;
// // //     int count = 0;
// // // //    o(nlgn) use unordered map 0(n)
// // // // sc-0(n)
// // //     for (int i = 0; i < arr.size();i++){
// // //         prefix_sum += arr[i];
// // //         int remove = prefix_sum - k;
// // //         count += mpp[remove];
// // //         mpp[prefix_sum] += 1;
// // //     }
// // //     cout << count;
// // // }
// // // -----------------------pascal triangle
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // vector<int>generaterow(int row){
// // //     long long ans = 1;
// // //     vector<int> ansrow;
// // //     ansrow.push_back(1);
// // //     for (int col = 1; col < row;col++){
// // //         ans = ans * (row - col);
// // //         ans = ans / col;
// // //         ansrow.push_back(ans);
// // //     }
// // //     return ansrow;
// // // }
// // // vector<vector<int>>pascaltriangle(int n){
// // //     vector<vector<int>> ans;
// // //     for (int i = 1; i <= n;i++){
// // //         vector<int> temp = generaterow(i);
// // //         ans.push_back(temp);

// // //     }
// // //     return ans;
// // // }
// // // int main(){
// // //    vector<vector<int>>result= pascaltriangle(5);
// // //    for(auto row:result){
// // //        for(auto x:row){
// // //            cout << x<<" ";
// // //        }
// // //        cout << endl;
// // //    }
// // //    return 0;
// // // }
// // // ---------------------------------
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // vector<int>majorityEement(vector<int>v){
// // //     int cnt1 = 0;
// // //     int cnt2 = 0;
// // //     int el1 = INT_MIN;
// // //     int el2 = INT_MIN;
    
// // //     for (int i = 0; i < v.size();i++){
// // //         if(cnt1==0 && el2!=v[i]){
// // //             cnt1 = 1;
// // //             el1 = v[i];
// // //         }
// // //         else if(cnt2==0&& el1!=v[i]){
// // //             cnt2 = 1;
// // //             el2 = v[i];
// // //         }
// // //         else if(v[i]==el1){
// // //             cnt1++;
// // //         }
// // //         else if(v[i]==el2){
// // //             cnt2++;
// // //         }
// // //         else{
// // //             cnt1--,cnt2--;
// // //         }

// // //     }
// // //     vector<int> ls;
// // //     cnt1 = 0;
// // //     cnt2 = 0;
    
// // //     for (int i = 0; i < v.size();i++){
// // //         if(el1==v[i]){
// // //             cnt1++;
// // //         }
// // //         if(el2==v[i]){
// // //             cnt2++;
// // //         }
// // //     }
// // //     int mini = (int)(v.size()/ 3) + 1;
// // //     if(cnt1>=mini){
// // //         ls.push_back(el1);
// // //     }
// // //     if(cnt2>=mini){
// // //         ls.push_back(el2);

// // //     }
// // //     sort(ls.begin(), ls.end());
// // //     return ls;
// // // }
// // // int main(){
// // //     vector<int> v = {1, 1, 1, 1, 3, 3, 2, 2, 2,2,2,2};
// // //     vector<int>x=majorityEement(v);
// // //     for(auto l:x){
// // //         cout << l;
// // //     }
    
// // // }
// // // -----------------------------------------------pascal-------------------------
// // #include<bits/stdc++.h>
// // using namespace std;

// // vector<int>generaterow(int n){
// //     vector<int>rows;

// //     long long res=1;
// //     rows.push_back(1);

       
   
// //         for (int j = 0; j <n;j++){
// //             res = res * (n - j);
// //             res = res / (j + 1);
// //             rows.push_back(res);
// //         }
// //         return rows;
    
    

    
    
    
// // }
// // int main(){
// //     int n = 5;
// //     vector<int> rows = generaterow(n);
// //     for(int c:rows){
// //         cout << c;
// //     }
// //     cout << endl;
// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums = {3,1};
//     int i = 0;
//     int gap = 0;
//     for (int j = i + 1; j < nums.size();j++){
//         gap = max(gap,abs(nums[j]-nums[i]));
//         i++;
//         }
//     cout << gap;
// }
