#include<stdio.h>
int main(){
    // Write a C Program to swap two integers using third variables.
    int a,b;
    printf("Enter first number:- ");
    scanf("%d",&a);
     
    printf("Enter second number:- ");
    scanf("%d",&b);

    int c;
    c=a;
    a=b;
    b=c;
    printf("value a is %d \n",a);
    printf("value b is %d \n",b);


    return 0;
}