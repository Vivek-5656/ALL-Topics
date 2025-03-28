#include<stdio.h>

int main(){
// Write a C program to perform logical NOT operation on an integer using the "!" operator.
    int a;
    printf("Enter a number:-  ");
    scanf("%d",&a);

    if (a%20!=0)
    {
        printf("a is not divided by 20");
    } else{
        printf("a is divisible by 20");
    }
    

    return 0;
}