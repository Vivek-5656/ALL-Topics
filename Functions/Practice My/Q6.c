#include<stdio.h>
//Write a function isPrime that takes an integer as input and returns 1 if the number is prime, otherwise 0. Use this function in main() to check if a given number is prime.

void primeNumber(){
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }

    if(count==2){
        printf("%d is Prime Number.",num);
    }
    else{
     printf("%d is Not Prime Number.",num); 
    }
}

int main(){
     
    primeNumber();

    return 0;
}