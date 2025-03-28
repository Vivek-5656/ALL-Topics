#include<stdio.h>
// Write a program to take input elements in an array and print array using pointers.
void printArray(int *arr,int size){
    printf("Elements:- \n");
    for(int i=0;i<size;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
}
int main(){
    int size;
    printf("Enter size:- ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Elements:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printArray(arr,size);
    

    return 0;
}