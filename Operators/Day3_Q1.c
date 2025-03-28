#include<stdio.h>

int main(){

    int num1;
    printf("Enter first num:-  ");
    scanf("%d",&num1);

    int num2;
    printf("Enter second num:-  ");
    scanf("%d",&num2);

    printf("add %d sub %d multi %d div %d",num1+num2 ,num1-num2,num1*num2,num1/num2);

    return 0;
}