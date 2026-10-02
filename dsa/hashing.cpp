// // // // // // #include<iostream>
// // // // // // #include<vector>
// // // // // // using namespace std;
// // // // // // int function(int number,vector<int>&a){
// // // // // //     int count = 0;
// // // // // //     for (int i = 0; i < a.size(); i++)
// // // // // //     {
// // // // // //         if(a[i]==number){
// // // // // //             count++;
// // // // // //         }
// // // // // //     }
// // // // // //     return count;
// // // // // // }
// // // // // // int main(){
// // // // // //     int number = 42;
// // // // // //     vector<int>a = {1, 2, 3, 42, 5};
// // // // // //     int n = a.size();
// // // // // //     cout << function(number,a);
// // // // // //     return 0;
// // // // // // }
// // // // // // tc-(5o(N))
// // // // // // sc-0(n)
// // // // // // if ther is q operation
// // // // // // 0(10^5 *10^5)==0(10^10)
// // // // // // 10^8== 1 sec
// // // // // // 10^10==100 sec
// // // // // // ---------------------------------------------------------------
// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int n;
// // // // //     cin >> n;
// // // // //     int arr[n];
// // // // //     for (int i = 0; i < n;i++){
// // // // //         cin >> arr[i];
// // // // //     }
// // // // //     // precompute
// // // // //     // they are already declare it can be 10^5 also
// // // // //     int hash[1000] = {0};
// // // // //     // can be declare 10^9+1 array no max size is 10^6 if int inside main more ( segmentation fault ) out side main globall 10^8 for bool - 10^7
// // // // //     for (int i = 0; i < n;i++){
// // // // //         hash[arr[i]] += 1;
// // // // //     }
// // // // //         int q;
// // // // //     cin >> q;
// // // // //     while(q--){
// // // // //         int number;
// // // // //         cin >> number;
// // // // //         // fetch
// // // // //         cout << hash[number] << endl;
// // // // //     }
// // // // //     return 0;
// // // // // }
// // // // // ----------------------------------------------------------------------
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main(){
// // // //     int n;
// // // //     cin >> n;
// // // //     int arr[n];
// // // //     for (int i = 0; i < n;i++){
// // // //         cin >> arr[i];
// // // //     }
// // // //     int hash[10000] = {0};
// // // //     for (int i = 0; i < n;i++){
// // // //         hash[arr[i]] += 1;

// // // //     }
// // // //     int q;
// // // //     cin >> q;
// // // //     while(q--){
// // // //         int number;
// // // //         cin >> number;
// // // //         cout << hash[number] << endl;
// // // //     }
// // // //     return 0;
// // // // }
// // // // -------------------------------maps ------------
// // // // ordered map ------------------>
// // // // map<key,value>
// // // // it store in a limit
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main(){
// // // //     int n;
// // // //     cin >> n;
// // // //     int arr[n];
// // // //     for (int i = 0; i < n;i++){
// // // //         cin >> arr[i];
// // // //     }
// // // //     // precompute
// // // //     map<int, int> mpp;
// // // //
// // // //     for (int i = 0; i < n;i++){
// // // //         mpp[arr[i]]++;
// // // //     }
// // // //     for(auto it:mpp){
// // // //         cout << it.first << "->" << it.second << endl;
// // // //     }

// // // //         int q;
// // // //     cin >> q;
// // // //     while(q--){
// // // //         int number;
// // // //         cin >> number;
// // // //         cout << mpp[number] << endl;
// // // //     }
// // // //     return 0;
// // // // }
// // // // tc-- map
// // // // storint and fetching in all case take log(n) for unordered map
// // // // unordered map----------------------------------------------------------------
// // // // storing and fetching ---0(1) {average best} in wrost case0(n)
// // // // because or internal collision happen wrost case which is very rare
// // // #include<bits/stdc++.h>
// // // // we use divison method  and more than 10 not allow
// // // using namespace std;
// // // // collision  where more  member in a same place

// // // int main(){

// // // }
// // // ------------------------hw find the lowest/highest friequency element
// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     int n;

// //     cin >> n;
// //     int arr[n];
// //     for (int i = 0; i < n;i++){
// //         cin>>arr[i];
// //     }
// //     // pre compute
// //     int hash[10000] = {0};
// //     for (int i = 0; i < n;i++){
// //         hash[arr[i]]++;

// //     }
// //     int min_freq = INT_MAX;
// //     int element = -1;
// //     for (int i = 0; i < n;i++){

// //         if(hash[arr[i]]<min_freq){
// //             min_freq = hash[arr[i]];
// //             element = arr[i];
// //         }
// //     }
// //         cout <<"element"<< element<<endl ;
// //         cout <<"min frequency"<<min_freq<<endl;

// // }
