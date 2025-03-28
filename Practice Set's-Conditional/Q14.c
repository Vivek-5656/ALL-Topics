#include<stdio.h>

int main(){
//  Write a program to categorize a number as small, medium, or large based on ranges.

    int num;
    printf("Enter number :- ");
    scanf("%d",&num);

    if(num > 0 && num <= 10){
        printf("%d is Small Number.",num);
    } else{
        if(num > 10 && num < 50){
            printf("%d is Medium Number.",num);
        } else{
            if(num > 50){
                printf("%d is Large Number.",num);
            }
        }
    }

    return 0;
}