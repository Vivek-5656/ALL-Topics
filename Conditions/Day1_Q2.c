#include<stdio.h>

int main(){
// Write a C program to perform logical OR operation on two integers using the "||" operator.
    int num1;
    printf("Enter first number:-  ");
    scanf("%d",&num1);

    int num2;
    printf("Enter second number:-  ");
    scanf("%d",&num2);

    if (num1 > num2 || num1 == num2)
    {
        printf("it is grater than n2 or equal to num2");
    } else{
        printf("it is nothing");
    }
    

    return 0;
}