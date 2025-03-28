// Dynamic Array Using 
// Task:
//  calloc
//  Write a program that dynamically allocates a 1D array using Take input from the user to fill the array with integer values.
//  Display the contents of the array.
//  calloc .
//  DMA Practice Set :
// Input:
//  Enter the number of elements: 5
//  Enter the elements: 10 20 30 40 50  
#include<stdio.h>
#include<stdlib.h>
int main(){
    int s;
    printf("Enter Size of array:- ");
    scanf("%d",&s);

    int *arr=(int*)calloc(s,sizeof(int));
    printf("Enter Element:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&*(arr+i));
    }
    for(int i=0;i<s;i++){
        printf("%d ",*(arr+i));
    }

    return 0;
}