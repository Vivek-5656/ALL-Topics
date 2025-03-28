#include<stdio.h>

// Write a program to take a number from the user and return the count of digits in that number using a function.
    int count();

    int main(){

        int coundDigit = count();
        printf("count is %d",coundDigit);

        return 0;
    }

    int count(){
        int num;
        printf("Enter a number :- ");
        scanf("%d",&num);

        int digit=0;
        while (num != 0) {
            int rem=num%10;
            digit=digit +1;
            num = num/10;
        }

        return digit;
        
    }