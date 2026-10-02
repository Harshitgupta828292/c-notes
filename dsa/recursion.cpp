// // // // // // // // #include<iostream>
// // // // // // // // #include<bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // void print() {
// // // // // // // //      cout << "t";
// // // // // // // //      print();
// // // // // // // // }

// // // // // // // // int main(){
// // // // // // // //     print();
// // // // // // // //     return 0;
// // // // // // // // }
// // // // // // // #include<Iostream>
// // // // // // // using namespace std;
// // // // // // // int count = 0;

// // // // // // // void print(){
// // // // // // //     if(count==4){

// // // // // // //         return ;

// // // // // // //     }
// // // // // // //     count++;

// // // // // // //     cout << count;

// // // // // // //     print();
// // // // // // // }
// // // // // // // int main(){
// // // // // // //     print();
// // // // // // // }
// // // // // // // ------printname 5 time---------
// // // // // // // backtracking kyuki back piche function likha h
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // void print(int i,int n){
// // // // //     if (i >= n){
// // // // //         return;
// // // // // }

// // // // // print(i +1,n);

// // // // // cout << i;
// // // // // }

// // // // // int main(){
// // // // //     int n;
// // // // //     cin >> n;

// // // // //     print(0,n);
// // // // // }
// // // // // --------------sum of first n number -----------
// // #include<iostream>
// // using namespace std;
// // int printl(int n){
// //     if (n<=1){
// //         return 1;
// //     }
// //     return  n + printl(n - 1);
// // }
// // int main(){
// //     int n;
// //     cin >> n;

// //     cout<<printl(n);
// // }
// // // // void fun(int i,int sum){
// // // //     if (i<1){
// // // //         cout << sum;
// // // //         return ;

// // // //     }
// // // //     fun(i - 1, sum * i);
// // // // }
// // // // int main(){
// // // //     int n;
// // // //     cin >> n;
// // // //     fun(n,1);
// // // // }
// // // // -----------------------reverse an array -----
// // // // #include <iostream>
// // // // #include <vector>
// // // // using namespace std;

// // // // void reverse(vector<int>& vec, int l, int r)
// // // // {
// // // //     if (l >= r)
// // // //         return;

// // // //     swap(vec[l], vec[r]);
// // // //     reverse(vec, l + 1, r - 1);
// // // // }

// // // // int main()
// // // // {
// // // //     vector<int> vec = {10, 20, 30};
// // // //     int n = vec.size();

// // // //     reverse(vec, 0, n - 1);

// // // //     for (int x : vec)
// // // //     {
// // // //         cout << x << " ";
// // // //     }
// // // // }
// // // // // ----do this singe pointer
// // // // #include<iostream>
// // // // #include<vector>
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // void reverse(int i,int arr[],int n){
// // // //     if(i>=n/2)
// // // //         return;
// // // //     swap(arr[i], arr[n - i - 1]);

// // // //     reverse(i + 1,arr,n);
// // // // }


// // // // int main(){
// // // //     int n;
// // // //     cin >> n;
// // // //     int arr[n];
// // // //     for (int i = 0; i < n;i++)
// // // //         cin >> arr[i];
// // // //     reverse(0, arr, n);
// // // //     for (int i = 0; i < n;i++)
// // // //         cout << arr[i];
// // // //         return 0;
// // // // }
// // // // ------------------------check if the string is palidrome or not 
// // // #include<iostream>
// // // using namespace std;
// // // bool f(int i,string &s){
// // //     if(i>=s.size()/2)
// // //         return true;
// // //     if(s[i]!=s[s.size()-i-1])
// // //         return false;
// // //     return f(i + 1, s);
// // // }
// // // int main(){
// // //     string s = "madam";
// // //     cout << f(0, s);
// // //     return 0;
// // // }
// // // -----------------multiple recursion call-----------
// // #include<iostream>
// // using namespace std;
// // int fun(int n)
// // {
// //     if (n<=1)
// //         return n;

// //     int last = fun(n - 1);
// //     int slast = fun(n - 2);

// //     return last + slast;
// // }
// // int main(){
    
// //     cout<<fun(9);
// // }

// // -----------------------print all subsequence(a continuous /non continus sequence-----------------
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     vector<int> arr = {1,8,6,2,5,4,8,3,7};
// //     int n = arr.size();
// //     int maximum =0;
// //     for (int i = 0; i < n;i++){
// //         for (int j = i + 1; j < n;j++){
// //             int width = j - i;
// //             int height = min(arr[i], arr[j]);
// //             int area = width * height;
// //             maximum = max(maximum, area);
// //     }
// //     }
// //     cout << maximum;

// //     // int number=last_number-maximum;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 7};
//     int n = arr.size();
//     int left = 0;
//     int right = n-1;
//     int maximum = 0;
//     while(left<right){
        
//             int width = right-left;
//             int height = min(arr[left], arr[right]);
//             int area = width * height;
//             maximum = max(maximum, area);
//             if(arr[left]<arr[right]){
//                 left++;

//             }
//             else{
//                 right--;
//             }
        
//     }
//     cout << maximum;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={-1,2,1,-4};
    int target = 1;
    int sum = 0;
    vector<long long, int> mpp;
    for (int i = 0; i < arr.size();i++){
        sum += mpp[arr[i]];
        mpp.find(arr[i])==
    }
}