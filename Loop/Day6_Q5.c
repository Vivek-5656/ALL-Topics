#include<stdio.h>

int main(){
// Write a program to take a number from a user and point from user input to 1. (input=5) (output=5 4 3 2 1 )

    int numInput;
    printf("Enter number :- ");
    scanf("%d",&numInput);

    for(numInput; numInput >= 1; numInput--){
        printf("%d\n",numInput);
    }

    return 0;
}