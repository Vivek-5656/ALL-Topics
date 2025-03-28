#include<stdio.h>

int main(){
// iii) Write a C program to implement a menu-driven calculator using switch statements for arithmetic operators and switch statements for input validation.

    int num1;
    printf("Enter your first number:- ");
    scanf("%d",&num1);

    char operator ;
    printf("Enter your operator:- ");
    scanf(" %c",&operator);

    int num2;
    printf("Enter your second number:- ");
    scanf("%d",&num2);

    int result;

    switch (operator){
        case  '+':
        result = num1 + num2;
        printf("result is :- %d",result);
        break;

        case '-':
        result = num1 - num2;
        printf("result is :- %d",result);
        break;

        case '*':
        result = num1 * num2;
        printf("result is :- %d",result);
        break;

        case '/':
        result = num1 / num2;
        printf("result is :- %d",result);
        break;
    
         

        default:
        printf("Please Enter valid operator.");
        break;
    }

    return 0;
}