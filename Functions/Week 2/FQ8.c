#include<stdio.h>
// Write a Function findGCD(a,b) that calculates and returns the greatest common divisor (GCD) of two numbers using the Euclidean.

int gcd(){
    int a,b;
    printf("Enter first Number :- ");
    scanf("%d",&a);
    printf("Enter Second Number :- ");
    scanf("%d",&b);
    int gcd;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }

    return gcd;
}

int main(){

    int gcdNumber = gcd();
    printf("Greatest Common Factor = %d",gcdNumber);

    return 0;
}