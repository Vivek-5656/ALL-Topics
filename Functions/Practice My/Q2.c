#include<stdio.h>

// Write a function addNumbers that takes two integers as parameters and prints their sum. Call this function from main() with different values.

void sumOfNumber( int a,int b){
    int sum = a+b;
    printf("Sum is = %d",sum);
}

int main(){
    sumOfNumber(5,3);
    return 0;
}