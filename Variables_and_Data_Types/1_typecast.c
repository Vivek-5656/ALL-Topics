#include <stdio.h>

int main()
{
    // Take two input 5,7 as int and print their value after type casting into float value and divide.
    int num1,num2;
    printf("Enter First Number:- ");
    scanf("%d",&num1);

    printf("Enter Second Number:- ");
    scanf("%d",&num2);

    float result = (float)num1/num2;
    printf("Value is division of num1 and num2 is :- %f",result);

    return 0;  
}