#include<stdio.h>

int main(){
    // Write a C Program to declare a variable of type int and check whether it is even or odd.
    int num;
    printf("Enter your number:- ");
    scanf("%d",&num);

    if (num%2==0){
        printf("It is even number.");
    } 
     if(num%2!=0){
        printf("It is odd number");
    }
    

    return 0;
}