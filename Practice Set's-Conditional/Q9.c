#include<stdio.h>

int main(){
// 20. Write a program to find if a number is perfect (sum of divisors equals the number).
// EX:- 1+2+3=6 it is perfect number. and 28=14+7+4+2+1

    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);

    int sum=0;

    for(int i=1;i<num;i++){
        if(num%i==0){
            printf("i is %d\n",i);
            sum=sum+i;
        }
    }
    printf("------sum is %d\n",sum);

    if(sum==num){
        printf("Perfect number.");
    } else{
        printf("Not perfect number.");
    }

    return 0;
}