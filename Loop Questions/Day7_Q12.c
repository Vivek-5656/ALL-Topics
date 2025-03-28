#include <stdio.h>

int main(){
    // Write a program to take two numbers from the user and find the greatest common factor of them. 10 15

    int num1;
    printf("Enter first number:- ");
    scanf("%d", &num1);

    int num2;
    printf("Enter second number:- ");
    scanf("%d",&num2);
    int gcf=1;
    for(int i=i+1;i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            gcf=i;
            
        }
        // Pending
    }
    printf("%d",gcf);

    return 0;
}