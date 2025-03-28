#include<stdio.h>
int main(){

    int n=5;
    int temp;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<n;i++){
        temp=arr[i];
        arr[i]=arr[n-i];
        arr[i]=temp;
    }

    return 0;
}