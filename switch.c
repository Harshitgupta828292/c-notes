// #include<stdio.h>
// int main (){
//     int n,reversenum=0;
//     printf("enter the value ogf the integer ");
//     scanf("%d",&n);
//     for(;n!=0;n/=10)
// {
//     reversenum=reversenum*10+(n%10);
// }
// printf("reversenum%d",reversenum);
// return 0;
// }





// #include <stdio.h>

// int main() {
//     int num, reversedNum = 0;

//     // Input: Get the number from the user
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     // Reverse the number using a for loop
//     for (; num != 0; num /= 10) {
//         reversedNum = reversedNum * 10 + (num % 10);  // Build the reversed number
//     }

//     // Output: Display the reversed number
//     printf("Reversed Number: %d\n", reversedNum);

//     return 0;sss
// }

#include<stdio.h>
int main (){
    int n,result=1;
    printf("enter the value ");
scanf("%d",&n);
for(int i=1;i<=n;i++)

    result*=i;

printf("%d\n",result);

return 0;
}