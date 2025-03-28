#include<stdio.h>

int main(){
// 24. Check whether a number lies between two given numbers.

    int num1;
    printf("Enter first number :- ");
    scanf("%d",&num1);

    int num2;
    printf("Enter second number :- ");
    scanf("%d",&num2);

    int liesNumber;
    printf("Enter lies number :- ");
    scanf("%d",&liesNumber);

    if(liesNumber > num1){
        if(liesNumber < num2){
            printf("Yes %d is lies between %d and %d",liesNumber,num1,num2);
        }
    } else{
        printf("No");
    }
    
    return 0;
}