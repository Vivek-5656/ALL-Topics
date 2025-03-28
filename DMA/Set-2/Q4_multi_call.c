// Multiply All Elements of a 1D Array Using calloc
//  Write a program that dynamically allocates a 1D array using calloc, takes input for the array, and then calculates and displays the product of all its elements.
//  Input:- Enterthe number of elements: 3- Enterthe elements: 2 3 4
#include<stdio.h>
#include<stdlib.h>
int main(){
    int s,multi=1;
    printf("Enter size:- ");
    scanf("%d",&s);
    int *multiply=(int*)calloc(s,sizeof(int));
    printf("Enter Elements:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&*(multiply+i));
    }
    for(int i=0;i<s;i++){
        multi*=*(multiply+i);
    }
    printf("Multiple = %d",multi);

    return 0;
}