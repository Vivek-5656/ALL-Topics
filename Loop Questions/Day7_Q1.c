#include<stdio.h>

int main(){
// Write a program to printf sum of all number 1 to given number.
    int sp;
    printf("Enter sp:- ");
    scanf("%d",&sp);

    int ep;
    printf("Enter ep:- ");
    scanf("%d",&ep);

    int sum=0;

    for(sp;sp<=ep;sp++){
        printf("%d\n",sp);
        sum=sum+sp;
    }
    printf("sum is %d",sum);
    
    return 0;
}