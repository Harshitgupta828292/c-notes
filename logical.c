#include<stdio.h>
int main (){
    printf("%d",3<4 && 3<5);
    printf("%d",3<4 && 5<4);
    
      printf("%d",3<4 && 3<5);
    printf("%d",3<4 && 5<4);
    printf("%d",3<4 && 3<5);

    printf("%d", !(3<4 && 3<5));
    printf("%d",!(4<3 || 5<3));
    return 0;
}