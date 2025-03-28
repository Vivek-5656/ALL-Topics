// Maximum Element in Array Using 
// Task:
//  calloc
//  Write a program that dynamically allocates a 1D array using 
// Take input for the array.
//  Find and display the maximum element.
//  Input:
//  Enter the number of elements: 4
//  Enter the elements: 10 25 30 5
#include<stdio.h>
#include<stdlib.h>
int main(){
    int s;
    printf("Enter size of array:- ");
    scanf("%d",&s);
    int *maximum=(int*)calloc(s,sizeof(int));
    printf("Enter Elements:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&*(maximum+i));
    }
    for(int i=0;i<s;i++){
        printf("%d ",*(maximum+i));
    }
    int max=0;
    for(int i=0;i<s;i++){
        if(max < *(maximum+i)){
            max=*(maximum+i);
        }
    }
    printf("\nMaximum = %d",max);

    return 0;
}