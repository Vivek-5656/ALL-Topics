#include<stdio.h>

int main(){
    // Write a C Program to declare two variables of type float and find their product.
    float a,b;
    printf("Enter first num:- ");
    scanf("%f",&a);

    printf("Enter second num:- ");
    scanf("%f",&b);

    float product=a*b;
    printf("%f",product);

    return 0;
}