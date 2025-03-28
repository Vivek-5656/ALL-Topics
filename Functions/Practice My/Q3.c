#include<stdio.h>
// Write a program to calculate the square of a number using a function named square. Test the function with at least three different numbers.

int squareNumber(){
    int n,power;
    printf("Enter Number :- ");
    scanf("%d",&n);
    printf("Enter Power :- ");
    scanf("%d",&power);
    int multi=1;
    for(int i=1;i<=power;i++){
        multi=multi*n;
    }
    return multi;
}

int main(){
    int square = squareNumber();
    printf("Square = %d",square);

    return 0;
}