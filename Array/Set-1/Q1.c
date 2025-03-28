#include<stdio.h>
int main(){
// Write a program to create an array of ve inputs from the user and display the elements of the array.
    int n;
    printf("Enter arary index:- ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Elements:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }

    return 0;
}