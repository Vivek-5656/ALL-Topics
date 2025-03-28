#include <stdio.h>

int main(){
// Write a C program to check whether a triangle is valid or not if angles are given.
    int a;
    printf("Enter first angle:-  ");
    scanf("%d", &a);

    int b;
    printf("Enter second angle:-  ");
    scanf("%d", &b);

    int c;
    printf("Enter third angle:-  ");
    scanf("%d", &c);
    
    int sum=a+b+c;
    
    if(sum == 180 && a > 0 && b > 0 && c > 0){
        printf("It is triangle");
    }else{
        printf("It is not triangle");
    }

    return 0;
}