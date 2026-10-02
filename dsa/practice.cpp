// // // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // // using namespace std;
// // // // // // // // // // int main(){
// // // // // // // // // //     string s = {"pwwkew"};
// // // // // // // // // //     int left = 0;
// // // // // // // // // //     int maxLength = 0;
// // // // // // // // // //     set<char> charset;
// // // // // // // // // //     for (int i = 0; i < s.size();i++){
// // // // // // // // // //         while(charset.find(s[i])!=charset.end()){
// // // // // // // // // //             charset.erase(s[left]);
// // // // // // // // // //             left++;
// // // // // // // // // //         }
// // // // // // // // // //         charset.insert(s[i]);
// // // // // // // // // //         maxLength = max(maxLength, i - left + 1);
        
// // // // // // // // // //     }
// // // // // // // // // //     cout << maxLength;
// // // // // // // // // // }
// // // // // // // // // // -----------------------------------------
// // // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // // using namespace std;
// // // // // // // // // // int recursion(int n){
// // // // // // // // // //     if(n<1){
// // // // // // // // // //         return 0;
// // // // // // // // // //     }
// // // // // // // // // //     return n +recursion(n - 1);
// // // // // // // // // // }
// // // // // // // // // // int main(){
// // // // // // // // // //     vector<int> arr = {4, 3, 6, 2, 1, 1};
// // // // // // // // // //     int hash[arr.size()+1] = {0};
// // // // // // // // // //     int n = arr.size();
// // // // // // // // // //     for (int i = 0; i < n;i++){
// // // // // // // // // //         hash[arr[i]]++;
// // // // // // // // // //         if(hash[arr[i]]==2){
// // // // // // // // // //             cout << arr[i];
// // // // // // // // // //         }


    
    
// // // // // // // // // //     }
// // // // // // // // // //     int sum = 0;
// // // // // // // // // //     int target = recursion(n);
// // // // // // // // // //     for (int i = 0; i < n;i++){
// // // // // // // // // //         sum += arr[i];
        
// // // // // // // // // //     }
// // // // // // // // // //     int missing_number = target - sum;
// // // // // // // // // //     cout << missing_number;
// // // // // // // // // // }
// // // // // // // // // // --------------optimal------------
// // // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // // using namespace std;

// // // // // // // // // // int main(){
    
// // // // // // // // // //     vector<int> arr = {4, 3, 6, 2, 1, 1};
// // // // // // // // // //     int xor1 = 0;
    
// // // // // // // // // //     for (int xor2 = 0; xor2 < arr.size();xor2++){
// // // // // // // // // //         xor1 ^= arr[xor2];
// // // // // // // // // //         xor1 ^= (xor2 + 1);
// // // // // // // // // //     }
// // // // // // // // // //     cout << xor1;
// // // // // // // // // //     int n = arr.size();
// // // // // // // // // //     int target = n * (n + 1) / 2;
// // // // // // // // // //     int sum = 0;
// // // // // // // // // //     for (int i = 0; i < arr.size();i++){
// // // // // // // // // //         sum += arr[i];
        
// // // // // // // // // //     }
// // // // // // // // // //     int standard = target - sum+1;
// // // // // // // // // //     cout << standard;
// // // // // // // // // // }
// // // // // // // // // // ---------------solve-----------
// // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // using namespace std;
// // // // // // // // // int main(){
// // // // // // // // //     int x = -120;
// // // // // // // // //     int last_digit = 0;
// // // // // // // // //     if(x<0){
// // // // // // // // //         cout << "-";
// // // // // // // // //         x = abs(x);
// // // // // // // // //     }
// // // // // // // // //     while(x>0){
// // // // // // // // //         last_digit = x % 10;
// // // // // // // // //         cout << last_digit;
// // // // // // // // //         x = x / 10;
// // // // // // // // //     }

// // // // // // // // // }
// // // // // // // // #include<bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // bool compare(string a,string b){
// // // // // // // //     return a + b > b + a;
// // // // // // // // }
// // // // // // // // int main(){
// // // // // // // //     vector<string> str_arr;
// // // // // // // //     vector<int>arr={3,30,34,5,9};
// // // // // // // //     for(int num:arr){
// // // // // // // //         str_arr.push_back(to_string(num));
        
// // // // // // // //     }
// // // // // // // //     sort(str_arr.begin(), str_arr.end(), compare);
// // // // // // // //     for(string s:str_arr){
// // // // // // // //         cout << s;
// // // // // // // //     }

// // // // // // // // }
// // // // // // // #include<bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // vector<int>findmissingnumber(vector<int>a){
// // // // // // // long long n =a.size();
// // // // // // // long long  sn=(n*(n+1))/2;
// // // // // // // long long s2n = (n * (n + 1) * (2 * n + 1)) / 6;
// // // // // // // long long s = 0, s2 = 0;
// // // // // // // for (int i = 0; i < n;i++){
// // // // // // //     s += a[i];
// // // // // // //     s2 += (long long)a[i] * (long long)a[i];

// // // // // // // }
// // // // // // // long long val1 = s - sn;
// // // // // // // // x-y
// // // // // // // long long val2 = s2 - s2n;
// // // // // // // val2 = val2 / val1;
// // // // // // // // x+y
// // // // // // // long long x = (val1 + val2) / 2;
// // // // // // // long long y = x - val1;
// // // // // // // return {(int)x, (int)y};
// // // // // // // }
// // // // // // // int main(){
// // // // // // //     vector<int> a = {4, 3, 6, 2, 1, 1};

// // // // // // //     for(int x:findmissingnumber(a)){
// // // // // // //         cout << x;
// // // // // // //     }
// // // // // // // }
// // // // // // // // tc==0(n)
// // // // // // // // sc--0(1)
// // // // // // // ------------xor------------------------------------------
// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // vector<int>findmissingnumber(vector<int>a){
// // // // // //     long long n = a.size();
// // // // // //     int xr = 0;
// // // // // //     for (int i = 0; i < n;i++){
// // // // // //         xr = xr ^ a[i];
// // // // // //         xr = xr ^ (i + 1);
// // // // // //     }
// // // // // //     // int bit_no = 0;
// // // // // //     // while(1){
// // // // // //     //     if(xr &(1<<bit_no)!=0){
// // // // // //     //         break;
// // // // // //     //     }
// // // // // //     //     bit_no++;
// // // // // //     // number=bit_no
// // // // // //     // }
// // // // // //     // easy bit ,manipulation
// // // // // //     int number = xr & ~(xr - 1);
// // // // // //     int zero = 0;
// // // // // //     int one = 0;
// // // // // //     for (int i = 0; i < n;i++){
// // // // // //         // part of 1 club
// // // // // //         if((a[i] &number)!=0){
// // // // // //             one = one ^ a[i];
// // // // // //         }
// // // // // //         // zero club
// // // // // //         else{
// // // // // //             zero = zero ^ a[i];
// // // // // //         }
// // // // // //     }
// // // // // //     for (int i = 0; i <= n;i++){
// // // // // //           if((i&number)!=0){
// // // // // //             one = one ^ i;
// // // // // //         }
// // // // // //         // zero club
// // // // // //         else{
// // // // // //             zero = zero ^ i;
// // // // // //         }
    


// // // // // //     }
// // // // // //     int count = 0;
// // // // // //     for (int i = 0; i < n;i++){
// // // // // //         if(a[i]==zero)
// // // // // //             count++;
// // // // // //     }
// // // // // //     if(count==2)
// // // // // //         return {zero, one};
// // // // // //     return {one, zero};
// // // // // // }
// // // // // // int main(){
// // // // // //      vector<int> a = {4, 3, 6, 2, 1, 1};

// // // // // //     for(int x:findmissingnumber(a)){
// // // // // //         cout << x<<endl;
// // // // // //     }

// // // // // // }
// // // // // #include<bits/stdc++.h>
// // // // // #include<iomanip>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     vector<int>nums1={1,2};
// // // // //     vector<int> nums2 = {3,4};
// // // // //     vector<int> temp;
// // // // //     int i = 0, j = 0;
// // // // //     while(i<nums1.size() &&j<nums2.size()){
// // // // //         if(nums1[i]<nums2[j]){
// // // // //                 temp.push_back(nums1[i]);
// // // // //                 i++;
// // // // //         }

// // // // //         else{
// // // // //             temp.push_back(nums2[j]);
// // // // //             j++;
// // // // //         }
        
// // // // //     }
// // // // //     for (; i < nums1.size();i++){
// // // // //         temp.push_back(nums1[i]);
// // // // //     }
// // // // //     for (; j < nums2.size();j++){
// // // // //         temp.push_back(nums2[j]);
// // // // //     }
// // // // //     int sum = 0;

// // // // //     for (int i = 0; i < temp.size();i++){
// // // // //         sum += temp[i];

// // // // //     }
    
// // // // //     double c = (double)sum / temp.size();
// // // // //      cout<< fixed<<setprecision(5)<<c;
    

// // // // //     }

// // // // // ----------------count inversion----------
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main(){
    
// // // //     vector<int>arr={5,3,2,4,1};
// // // //     int count = 0;
// // // //     for(int i=0;i<arr.size();i++){
// // // //         for(int j=i+1;j<arr.size();j++){
// // // //             if((i<j) && (arr[i]>arr[j])){
              
// // // //                 count++;
// // // //             }
// // // //         }
// // // //     }
// // // //     cout << count;
// // // //     }

// // // // --------------better--------------
// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // int merge(vector<int>&arr,int low,int mid,int high){
// // //     int invcount = 0;
// // //     vector<int> temp;
// // //     int i = low;
// // //     int j = mid + 1;

// // //     while(i<=mid && j<=high){
        
// // //         if(arr[i]<=arr[j]){
// // //             temp.push_back(arr[i]);
// // //             i++;
// // //         }
// // //         else{
// // //             temp.push_back(arr[j]);
// // //            invcount+= (mid - i + 1);
// // //             j++;
// // //         }
       
// // //     }
// // //         for (; i <=mid;i++){
// // //             temp.push_back(arr[i]);
// // //         }
// // //         for (; j<=high;j++){
// // //             temp.push_back(arr[j]);
// // //         }
// // //         for (int k = low; k <= high;k++){
// // //             arr[k] = temp[k - low];
// // //         }
// // //         return invcount;
// // // }
// // // int merge_sort(vector<int>&arr,int low,int high){
// // //     int invcount = 0;
// // //     if (low >= high)
// // //     {
// // //         return invcount;
// // //     }
// // // int mid = low + (high - low) / 2;
// // // invcount+=merge_sort(arr, low, mid);
// // // invcount+=merge_sort(arr, mid + 1, high);
// // // invcount+=merge(arr, low, mid, high);
// // // return invcount;
// // // }
// // // int numberofINvertion(vector<int>&arr,int n){
   
// // //     return merge_sort(arr, 0, n - 1);
    
// // // }
// // // int main(){
// // //     vector<int> arr = {5, 3, 2, 4, 1};
    
// // //     int n = arr.size();
   
// // //     int totalInversion = numberofINvertion(arr, n);
// // //     cout << totalInversion;
// // //     return 0;
// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     vector<int> nums1 = {1, 2, 3, 0, 0, 0};
// //     int m = 3;
// //     int n = 3;
// //     vector<int> nums2 = {2, 5, 6};
// //     vector<int> temp;
// //     int i = 0, j = 0;
// //     while (i < m &&j<n){
       
// //         if(nums1[i]>=nums2[j]){
// //             temp.push_back(nums2[j]);
// //             j++;
// //                 }
// //         else{
// //             temp.push_back(nums1[i]);
// //             i++;
// //         }
        
// //     }
// //     for (int k= i; k < n;k++){
       
// //         temp.push_back(nums1[k]);
// //     }
// //     for (int k = j; k < m;k++){
        
// //         temp.push_back(nums2[k]);
// //     }
// //     for (int k = 0; k < temp.size();k++){
// //         nums1[k] = temp[k];
// //     }
// //         for (int x : nums1)
// //         {
// //             cout << x;
// //         }
   
// // }
// // ------------------find peak element --------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>arr={1,2,3,4,5,6,7,8,5,1};
//     int n = arr.size();
//     int ans = -1;
//     if(arr[0]>arr[1]){
//         ans=arr[0];
//     }
//     else if(arr[n-2]<arr[n-1]){
//         ans=arr[n -1];
//     }
//     else{
//     for (int i = 1; i < n-1;i++){
//         if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
//             ans = arr[i];
//             break;
//         }
//         }
        
//     }
//     cout << ans;
// }4
// ----------------------------binary search ---------------------
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr={1,2,3,4,5,6,7,8,5,1};
    int n = arr.size();
    int ans = -1;
    if(arr[0]>arr[1]){
        ans=arr[0];
    }
    else if(arr[n-2]<arr[n-1]){
        ans=arr[n -1];
    }
    else{
        int low = 1;
        int high = n - 2;
        while(low<high){
            int mid = low+(high-low) / 2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                ans = arr[mid];
                // it s a opposite polarity so you will return low 
            }
            else if (arr[mid]<arr[mid+1]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
    }
}
