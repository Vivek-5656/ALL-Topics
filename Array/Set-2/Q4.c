#include<stdio.h>
int main(){
//Write a program to create an Array and take input from the user and print the largest element and smallest element.

    int size;
    printf("Enter size:- ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter Elements:- ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    } 

    int large=0;
    int small=9;
    for(int i=0;i<size;i++){
        if(arr[i] > large){
            large=arr[i];
        } 
        if(arr[i] < small){
            small=arr[i];
        }
    }
    printf("Large:- %d, Small:- %d",large,small);

    return 0;
}