// #include <bits/stdc++.h>
// using namespace std;
// int trap(vector<int> &arr)
// {
//     int left = 0;
//     int n = arr.size();
//     int right = n - 1;
//     int maxleft = 0;
//     int maxright = 0;
//     int water = 0;
//     while (left <= right)
//     {
//         if (arr[left] <= arr[right])
//         {
//             if (arr[left] >=maxleft)
//             {
//                 maxleft = arr[left];
//             }

//             else
//             {
//                 water += maxleft - arr[left];
//             }
//             left++;
//         }
//         else
//         {
//             if (arr[right] >= maxright)
//             {
//                 maxright = arr[right];
//             }
//             else
//             {
//                 water += maxright - arr[right];
//             }
//             right--;
//         }
//     }
//     return water;
// }
// int main()
// {
//     vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//     int k = trap(arr);
//     cout << k;
// }

#include<bits/stdc++.h>
using namespace std;
bool boolean(string s,hash[26]){
    int count = 1;
    for (int i = 0; i < 26;i++){
        if(hash[i]==hash[i+1]){
            return true;
        }
        if(hash[i]!=hash[i+1]){
            hash[i + 1] + count;
            count = 0;
        }

    }
 
}
int main(){
    string s="abcddd";
    int n = s.length();
    int hash[26] = {};
    for (int i = 0; i < s.length();i++){
        hash[s[i]-'a']++;
        
    }
    for (int i = 0; i < 26;i++){
        if(hash[i]>0){
            cout << char(i+'a')<<":"<<hash[i]<<endl;
        }
    }
   
    
}