#include<stdio.h>

int main(){
// 7. Write a program to check if a year is a leap year or not.

    int year;
    printf("Enter any year :- ");
    scanf("%d",&year);

    if((year%4==0 || year%400==0) && year%100!=0){
        printf("%d is Leap year.",year);
    } else{
        printf("%d is not leap year.",year);
    }

    return 0;
}