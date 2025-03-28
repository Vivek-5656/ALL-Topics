#include<stdio.h>
// Write a program to call a function that return the addition or two nunbers and print the result.
    int add();

    int main(){

        int ans = add();
        printf("ans is = %d",ans);
        

        return 0;
    }

    int add(){
        int a,b;
        printf("Enter first number :- ");
        scanf("%d",&a);
        printf("Enter second number :- ");
        scanf("%d",&b);

        int sum = a+b;
        return sum;
    }