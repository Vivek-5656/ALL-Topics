#include<stdio.h>

int main(){
// Write a program to take a number from a user and print that number 100 times.
    int a;
    printf("Enter number :- ");
    scanf("%d",&a);

    for(int i=1;i<=100;i++){
        printf("%d\n",a);
    }

    return 0;
}