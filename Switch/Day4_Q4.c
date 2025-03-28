#include<stdio.h>

int main(){
// iv) Write a C program to find the minimum of two integers using a ternary operator.

    int num1;
    printf("Enter first number:- ");
    scanf("%d",&num1);

    int num2;
    printf("Enter second number:- ");
    scanf("%d",&num2);

    (num1 < num2) ? printf("num1 is minum.") : printf("num2 is minimum");

    return 0;
}