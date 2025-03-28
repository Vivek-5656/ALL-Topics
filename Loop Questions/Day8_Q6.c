#include<stdio.h>

int main(){
// Write a program to take two numbers from the user and print the prime number present between them.

    int num1;
    printf("Enter First number :- ");
    scanf("%d",&num1);
    int num2;
    printf("Enter Second number :- ");
    scanf("%d",&num2);

    // int i;
    int j;
    int count;

    for(num1;num1<=num2;num1++){
        count=0;
        for(j=1;j<=num1;j++){
            if(num1%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d\n",num1);
        }
    }


    return 0;
}