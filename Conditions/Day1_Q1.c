#include<stdio.h>

int main(){
// Write a C Program to perform logical AND operation on two integers using the "&&" operator.
    int a;
    printf("Enter first num:-  ");
    scanf("%d",&a);

    int b;
    printf("Enter second num:-  ");
    scanf("%d",&b);

    if (a%2==0 && a%4==0)
    {
        printf("It is type of AND Operator");
    } else{
        printf("Nothing");
    }
    

    return 0;
}