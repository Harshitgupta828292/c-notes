// // #include<stdio.h>
// // int main(){
// //     int a[5];
// //     printf("Enter 5 elements: ");
// //     for(int i=0;i<5;i++){
// //         scanf("%d",&a[i]);
       
// //          // input ke sath print
// //     }
// //     printf("%d ", a);
// //     return 0;
// // }
// // -------------------array sum------------
// // # include<stdio.h>
// // int main(){
  
// //         int a[2][2] = {{1,2},{2,3}};
// //         int b[2][2] = {{5,6},{8,5}};
// //         int sum[2][2];
// //         for(int i=0;i<2;i++){
// //             for(int j=0;j<2;j++){
// //                 sum[i][j] = a[i][j] + b[i][j];
// //                 printf("%d ", sum[i][j]);
// //             }
// //             printf("\n");
// //         }
// // }
// // -----------------------array multiplication-----------------------
// #include<stdio.h>
// int main(){
//     int a[2][2] = {{1,2},{3,4}};
//     int b[2][2] = {{1,2},{1,2}};
//     int mul[2][2] = {0};
//     printf("Multiplication:\n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             mul[i][j] = 0;
//             for(int k=0;k<2;k++){
//                 mul[i][j] += a[i][k] * b[k][j];
//             }
//             printf("%d ", mul[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }