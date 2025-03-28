#include<stdio.h>

int main(){
// ii) Write a C program to implement a vending machine using switch statements.
    
    int order;
    printf("Enter your order:- ");
    scanf("%d",&order);

    switch (order){
        case 1:
        printf("Espresso.");  
        break;

        case 2:
        printf("Hot Coffee.");
        break;

        case 3:
        printf("Americano.");
        break;

        case 4:
        printf("Long Black.");
        break;

        case 5:
        printf("Cappucino.");
        break;
    
        default:
        printf("Not available!");  
        break;
    }

    return 0;
}