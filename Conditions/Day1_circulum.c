#include<stdio.h>

int main(){
// Write a C program to check whether a number is divisible by 5 and 11 or not using an if-else statement.
    int num;
    printf("Enter a number:- ");
    scanf("%d",&num);

    if (num%5==0 && num%11==0)
    {
        printf("num is divisible by both 5 or 11");
    } else{
        printf("num is not divisible by both 5 or 11");
    }
    

    return 0;
}