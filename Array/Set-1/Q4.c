#include<stdio.h>

int main(){
// Write a program to create an Array and take input from the user and print the average of the elements.
    int num;
    printf("Enter index number:- ");
    scanf("%d",&num);

    int arr[num];
    printf("Enter Elements:- \n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    
    int sum=0;    
    for(int i=0;i<num;i++){
        sum=sum+arr[i];

    }
    int average = sum/num;
    printf("average = %d",average);

    return 0;
}