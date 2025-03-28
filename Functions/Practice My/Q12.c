#include<stdio.h>
//Write a function sumOfN that takes an integer n and returns the sum of the first n natural numbers. Call this function from main().
int naturalNumber(){
    int ep;
    printf("Enter Ending Point:- ");
    scanf("%d",&ep);
    int sum=0;
    for(int sp=1;sp<=ep;sp++){
        sum+=sp;
    }
    return sum;
}
int main(){

    int sumOfNatural = naturalNumber();
    printf("Sum is = %d",sumOfNatural);
    return 0;
}