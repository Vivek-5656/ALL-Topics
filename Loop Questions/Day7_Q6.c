#include<stdio.h>

int main(){
// Write a program to take two numbers from the user and Find an even number between them.
    int num1;
    printf("Enter starting number :- ");
    scanf("%d",&num1);

    int num2;
    printf("Enter ending number :- ");
    scanf("%d",&num2);

    for(;num1<=num2;num1++){
        if(num1%2==0){
            printf("%d \n",num1);
        }
    }

    return 0;
}