#include<stdio.h>
//Write a function sumOfDigits that takes an integer as input and returns the sum of its digits. Use this function in main().
int sumOfDigit(int num){
    
    int sum=0;
    int rem;
    while(num!=0){
        rem=num%10;
        sum=sum+rem;
        num/=10;  
    }
    return sum;
}

int main(){
    int number;
    printf("Enter any Number :- ");
    scanf("%d",&number);
    int sumOfNumber = sumOfDigit(number);
    printf("Sum of Digit = %d",sumOfNumber);
    return 0;
}