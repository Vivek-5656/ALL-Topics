#include<stdio.h>

int main(){
    // Write a C Program to declare three variables of type float and find their average.
    float n1,n2,n3;

    printf("Enter n1 value:- ");
    scanf("%f",&n1);

    printf("Enter n2 value:- ");
    scanf("%f",&n2);

    printf("Enter n3 value:- ");
    scanf("%f",&n3);

    float store = (n1+n2+n3)/3;
    printf("The average number is %f:- ",store);
    return 0;
}