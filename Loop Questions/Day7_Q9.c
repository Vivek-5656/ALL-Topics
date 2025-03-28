#include<stdio.h>

int main(){
// Write a program to take two numbers from the user one as a base , second as a power calculate and print.
    int base;
    printf("Enter first number:- ");
    scanf("%d",&base);

    int power;
    printf("Enter second number:- ");
    scanf("%d",&power);

    int a=1;
    
    for(int i=1;i<=power;i++){
        // printf("%d\n",base);
        a=a*base;
        
    } 
    printf("%d",a);

    return 0;
}