#include<stdio.h>

int main(){
// 6. Determine if a number is a single-digit, double-digit, or more.

    int num;
    printf("Enter number:- ");
    scanf("%d",&num);

    if(num < 10){
        printf("Single digit %d",num);
    } else if(num >= 10 && num < 100){
        printf("Double digit %d",num);
    }

    return 0;
}