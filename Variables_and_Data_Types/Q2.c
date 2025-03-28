#include<stdio.h>

int main(){
    // Take a user input in char and another user input as int and sum both and type cast and print in float c and 5. 
    char chr;
    printf("Enter Character value:- ");
    scanf("%c",&chr);
    int chng = (int)chr;

    int intr;
    printf("Enter Integer value:- ");
    scanf("%d",&intr);

    float sum = (float)chng + intr;
    printf("Sum of chng and intr :- %f",sum);

    return 0;
}