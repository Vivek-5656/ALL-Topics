#include<stdio.h>

int main(){
// Write a program to take a number from the user and find the maximum and minimum digit of that number.
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);

    int max=0;
    int min=9;
    int rem;
    while (num!=0) {
        rem=num % 10;
        if(rem > max){
            max=rem;
        } 
        if(rem < min){
            min=rem;
        } 

        num=num/10;
    }
    printf("Maximum digit is = %d\n",max);
    printf("Minimum digit is = %d",min);
    

    return 0;
}