#include<stdio.h>
// Write a program to reverse an array using pointers.
void reverseArray(int *arr,int size){
    
    for(int i=size-1;i>=0;i--){
        printf("%d ",*(arr+i));
    }
}
int main(){
    int size;
    printf("Enter size of array:- ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Element:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    reverseArray(arr,size);

    return 0;
}