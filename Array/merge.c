#include<stdio.h>
// Write a program to merge two arrays into a single array.
void f1(){
    int arr1[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d",arr1[i]);
    }
}
void f2(){
    int arr2[5]={2,4,6,8,10};
    for(int i=0;i<5;i++){
        printf("%d",arr2[i]);
    }
}

int main(){
    f1();
    f2();
    return 0;
}