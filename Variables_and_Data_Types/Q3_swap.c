#include<stdio.h>

int main(){

    int num1;
    int num2;

    printf("Enter num1 vlue  ");
    scanf("%d",&num1);
    printf("Enter num2 value  ");
    scanf("%d",&num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("Print num1 is %d \n ",num1);
    printf("Print num2 is %d ",num2);

    return 0;
}