#include<stdio.h>
// Write a program to call a function that takes user input and tells if it is prime or not.

void primeNumber(){
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count=count+1;
        }
    }

    if(count==2){
        printf("%d is Prime Number ",num);
    } else{
        printf("%d is Not Prime Number ",num);
    }
}

int main(){

    primeNumber();
    return 0;
}