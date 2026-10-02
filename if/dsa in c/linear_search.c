#include<stdio.h>
int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){

        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,3,4,5,6,7,8,9,65,3};
    int size=sizeof(arr)/sizeof(int);
     int element=54;
    int searchIndex=linearSearch(arr,size,element);
    
    printf("the element %d is present %d \n",element,searchIndex);
    return 0;
}

 