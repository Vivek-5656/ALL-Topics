#include<stdio.h>
// -----------------------------------------------: Factorial Number :----------------------------------------

int factorialNumber(int n){
    if(n==1){
        return 1;
    }

    return n*factorialNumber(n-1);
}

int main(){
    int number;
    printf("Enter number :- ");
    scanf("%d",&number);
    int fact = factorialNumber(number);
    printf("Factorial is = %d",fact);

    return 0;
    
}