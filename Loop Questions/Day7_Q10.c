#include<stdio.h>

int main(){
// Write a program to take a number from the user and reverse that number. (reverse=reverse*10+remainder.)

    int num;
    printf("Enter number:-");
    scanf("%d",&num);

    int remiander;
    int reverse=0;

    while (num != 0) {
        remiander= num % 10;
        reverse=reverse*10+remiander;
        num = num/10;
    }
    printf("%d",reverse);
    

    return 0;
}