#include<stdio.h>
int main(){
// Write a program to print the value of a variable using a pointer.
    int num;
    printf("Enter the Number:- ");
    scanf("%d",&num);

    int *x = &num;
    printf("value is = %d",*x);

    return 0;
}