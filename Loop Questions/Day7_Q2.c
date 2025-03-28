#include<stdio.h>

int main(){
// Write a C program print 1 to given number and skip even numbers.
    int sp;
    printf("Enter sp:- ");
    scanf("%d",&sp);

    int ep;
    printf("Enter ep:- ");
    scanf("%d",&ep);

    for(;sp<=ep;sp++){
        if(sp%2==0){
            continue;
        }
        printf("%d\n",sp);
    }

    return 0;
}