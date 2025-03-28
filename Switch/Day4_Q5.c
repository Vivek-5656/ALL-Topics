#include<stdio.h>

int main(){
    // v) Write a C program to check whether a given year is a leap year using a ternary operator.

    int year;
    printf("Enter any year:- ");
    scanf("%d",&year);

    ((year%4==0 || year%400==0) && year%100!=0) ? printf("leap year") : printf("Not leap year");

    return 0;
}