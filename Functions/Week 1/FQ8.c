#include<stdio.h>
// Write a program to take two numbers from the user, one as a base and the other as a power, then calculate and print the result using a function.
    void power();

    int main(){
        power();
        return 0;
    }

    void power(){
        int b,p;
        printf("Enter base :- ");
        scanf("%d",&b);
        printf("Enter power number :- ");
        scanf("%d",&p);
        int m=1;
        for(int i=1;i<=p;i++){
            m=m*b;
        }
        printf("Power of %d is = %d",b,m);
    }