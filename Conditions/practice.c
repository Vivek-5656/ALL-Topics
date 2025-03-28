#include <stdio.h>

int main(){
// Input three sides of a triangle and check if it is a valid triangle (sum of any two sides should be greater than the third side).

// Write a program to check if a number lies between 50 and 100 (both inclusive).
// Write a program to find the largest of three numbers.
// Write a program to calculate the absolute value of a number.
// Write a program to input a character and check if it is an uppercase letter, lowercase letter, digit, or special character.


    int a;
    printf("Enter side a:-  ");
    scanf("%d",&a);

    int b;
    printf("Enter side b:-  ");
    scanf("%d",&b);

    int c;
    printf("Enter side c:-  ");
    scanf("%d",&c);

    int sum = a + b;
    if (sum > c )
    {
        printf("It is valid Triangle.");
    } else{
        printf("It is not valid triangle.");
    }
    

    return 0;
}