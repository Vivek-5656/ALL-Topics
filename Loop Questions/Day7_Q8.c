#include<stdio.h>

int main(){
// Write a program to take a number from the user and print the factorial of the given number.
    int num1;
    printf("Enter num1:- ");
    scanf("%d",&num1);

    int num2;
    printf("Enter num2:- ");
    scanf("%d",&num2);

    int factorial=1;

    for(;num1 >= num2;num1--){
        factorial=factorial*num1;
    } 
    printf("Factorial is :- %d",factorial);

    return 0;
}