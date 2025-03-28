#include<stdio.h>

int main(){
// Write a C program to swap two integers without using third variable using Arithemetic Operator.
    int a;
    printf("Enter first number:-  ");
    scanf("%d",&a);

    int b;
    printf("Enter second number:-  ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("a if after swaping %d \nb is after swaping %d",a,b);


    return 0;
}