#include<stdio.h>

int main(){
// Write a C program to check whether a given year is leap year or not using conditional Operator.
    int year;
    printf("Enter Year:- ");
    scanf("%d",&year);

    if ((year%4==0 && year%100!=0 )|| year%400==0)
    {
        printf("This is leap year.");
    } else{
        printf("This is not leap year.");
    }
    

    return 0;
}