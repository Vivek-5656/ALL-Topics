#include<stdio.h>
// Write a program to find the frequency of a given element in a 1D array.
int frequency(int arr[],int size,int num){
    int c=0;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            c++;
        }
    }
    return c;
}
int main(){
    int size,num;
    printf("Enter size of array:- ");
    scanf("%d",&size);
    printf("Enter Find number:- ");
    scanf("%d",&num);
    int arr[size];
    printf("Enter Elements:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    } 
    int find = frequency(arr,size,num);
    printf("Frequency of %d is [ %d ] ",num,find);

    return 0;
}