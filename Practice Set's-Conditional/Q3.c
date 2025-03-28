#include<stdio.h>

int main(){
// 8. Use a ternary operator to find the smaller of two numbers.

    int num1;
    printf("Enter first number :- ");
    scanf("%d",&num1);

    int num2;
    printf("Enter second number :- ");
    scanf("%d",&num2);

    (num1 < num2)? printf("%d is smaller.",num1) : printf("%d is smaller.",num2);

    return 0;
}