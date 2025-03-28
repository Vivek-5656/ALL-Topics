// Sum of Array Elements Using 
// malloc
//  Task:
//  Write a program that dynamically allocates a 1D array using 
// Take input for the array.
//  Calculate and display the sum of its elements.
//  Input:
//  Enter the number of elements: 3
//  Enter the elements: 5 10 15
#include<stdio.h>
#include<stdlib.h>
int main(){
    int s;
    printf("Enter size of array:- ");
    scanf("%d",&s);
    int *arr = (int*)malloc(s*sizeof(int));
    printf("Enter Element:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&*(arr+i));
    }
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=*(arr+i);
    }
    printf("Sum = %d",sum);

    return 0;
}