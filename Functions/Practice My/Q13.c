#include<stdio.h>
//Write a function simpleInterest that takes principal, rate, and time as arguments and returns the simple interest. Use the formula:
float simpleInterest(float p,float r,float t){
    float sI = (p*r*t)/100;

    return sI;
}

int main(){
    float principal,rate,time;
    printf("Enter Principal :- ");
    scanf("%f",&principal);
    printf("Enter rate :- ");
    scanf("%f",&rate);
    printf("Enter Time :- ");
    scanf("%f",&time);
    float simpleI = simpleInterest(principal,rate,time);
    printf("Simple Interest :- %f",simpleI);

    return 0;
}