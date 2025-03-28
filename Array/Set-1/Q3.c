#include<stdio.h>
int main(){
// Write a program to create an Array and take input from the user and print their sum.
    int n;
    printf("Enter Index Number:- ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Elements:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 

    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }

    printf("Sum = %d",sum);

    return 0;
}