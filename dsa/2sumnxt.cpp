// #include<bits/stdc++.h>
// using namespace std;
//  vector<int>twosum(vector<int>arr,int n,int target){
//      for (int i = 0; i < n;i++){
//          for (int j = i+1; j < n;j++){
//             // if(i==j){
//             //     continue;
//             // }
//             if(arr[i]+arr[j]==target){
//                 return {arr[i],arr[j]};
//             }
//          }
//      }
//      return {};
//  }
// int main(){
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int n = arr.size();
//     int target = 14;
//     vector<int>result=twosum(arr, n, target);
//     cout << result[0] << result[1];
// }

// --------------------------hashing------------------
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = arr.size();
    int target = 14;
    map<int, int> mpp;
    int hash[n + 1] = {0};
    for (int i = 0; i < n;i++){
        int a = arr[i];
        int more =  target - a;
        if(mpp.find(more)!=mpp.end()){
            cout << "yes";
        }
        mpp[a] = i;
    }
    cout << "no";
    ;
}