#include<stdio.h>

int main(){
// 10. Determine if a number is divisible by 7 but not by 3.

    int number;
    printf("Enter number :- ");
    scanf("%d",&number);

    if(number%7==0 && number%3!=0){
        printf("%d is divisible by 7 but not by 3.",number);
    } else if(number%3==0 && number%7!=0){
        printf("%d is divisible by 3 but not 7",number);
    } else if(number%7==0 && number%3==0){
        printf("%d is divisible by both 3 and 7",number);
    }

    return 0;
}