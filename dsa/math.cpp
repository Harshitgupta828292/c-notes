// // // // // // // // // #include<iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // void printn(int n){
// // // // // // // // //     while(n>0){
        
// // // // // // // // //        int last_digit  = n % 10;
// // // // // // // // //        cout << last_digit;
// // // // // // // // //        n = n / 10;
       
// // // // // // // // //     }
// // // // // // // // // }
// // // // // // // // // int main(){
// // // // // // // // //     int n;
// // // // // // // // //     cin >> n;
// // // // // // // // //     printn(n);
// // // // // // // // // }
// // // // // // // // // ---------------------------------
// // // // // // // // #include<iostream>
// // // // // // // // using namespace std;
// // // // // // // // void printn(int n){
// // // // // // // //     int count = 0;

// // // // // // // //     while(n>0){
        
// // // // // // // //        int last_digit  = n % 10;
// // // // // // // //        count++;
// // // // // // // //        n = n / 10;
       
// // // // // // // //     }
// // // // // // // //     cout << count << endl;
// // // // // // // // }
// // // // // // // // int main(){
// // // // // // // //     int n;
// // // // // // // //     cin >> n;
// // // // // // // //     printn(n);
// // // // // // // // }
// // // // // // // // -------------------------------
// // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // void printn(int n){
// // // // // // //     while(n>0){
        
// // // // // // //        int last_digit  = n % 10;
// // // // // // //        cout << last_digit;
// // // // // // //        n = n / 10;
       
// // // // // // //     }
// // // // // // // }
// // // // // // // int main(){
// // // // // // //     int n;
// // // // // // //     cin >> n;
// // // // // // //     printn(n);
// // // // // // // }
// // // // // // // ---------------------
// // // // // // #include<iostream>
// // // // // // #include<cmath>

// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //     long long n = 4503489573434;
     
// // // // // //     cout <<(int)(log10(n) + 1);
// // // // // // }
// // // // // // --------------reversenumber--------
// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int rev_num = 0;
// // // //     int n = 121;
// // // //     int origional = n;

// // // //     while(n>0){
// // // //         int last_digit = n % 10;
       
// // // //         rev_num = (rev_num * 10) + last_digit;
// // // //          n = n / 10;
// // // //     }
// // // //     if (rev_num==origional){
// // // //         cout << "true";
// // // //     }
// // // //     else{
// // // //         cout << "false";
// // // //     }
// // // // }
// // // // // --------------------
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int sum = 0;
// // //     int n = 371;
// // //     int dup = n;
// // //     int rev_num = 0;
// // //     while(n>0){
// // //         int last_digit = n % 10;
// // //         sum = sum + (last_digit *last_digit*last_digit);
// // //         n = n / 10;
// // //         rev_num = (rev_num * 10) + last_digit;
// // //     }
// // //     if(sum==dup){
// // //         cout << "true";
// // //     }
// // //     else{
// // //         cout << "false";
// // //     }
// // // }----------------------printalldivisor ------
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int n = 36;
    
// // //     for (int i = 1; i <=n/2;i++){
// // //         if (n%i==0)
// // //             cout << i ;

        
        
// // //     }
// // //     cout << n;
// // // }
// // // ------------------
// // #include<iostream>
// // #include<bits/stdc++.h>

// // using namespace std;
// // void printl(int n){
// //     vector<int> ls;
// //     for (int i = 1; i <= sqrt(n);i++){
// //         if(n%i==0){
// //             ls.push_back(i);
// //             if((n/i)!=i){
// //                 ls.push_back(n / i);
// //             }
// //         }
// //     }
// //     sort(ls.begin(), ls.end());
// //     for(auto it:ls)
// //         cout << it << " ";
// // }
// // int main(){
// //     int n;
// //     cin >> n;
// //     printl(n);
// // }
// // #include<iostream>
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int count = 0;
// //     int n = 36;
// //     for (int i = 1; i <= sqrt(n);i++){
// //         if(n%i==0){
// //             count++;
// //            if ((n/i)!=0)
// //                count++;
           
// //         }
// //     }
// // if(count==2)
// //         cout <<" prime";
    
// //     else
// //         cout << "not prime";
    
        
           
    
    
// // }
// // -------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int n1 = 9;
//     int n2 = 12;
//     int gcd =1;
//     for (int i = 1; i <= min(n1,n2);i++){
//         if(n1%i==0 &&n2%i==0)
//             gcd = i;
//     }
// }
// ---------------------euclidien algo-----------
#include<iostream>
using namespace std;
int main(){
    int a = 52;
    int b = 10;
    while(a>0 && b>0){
    if (a>b)
        a = a % b;
    else
        b = b % a;
    }
    if(a==0)
        cout << b;
    else
        cout << a;
}
// tc(log fi(min(a,b)) )
// division happen 

