#include<stdio.h>
// Write  a program to call a function that take two user inputs and returns the multiplication of the two numbers.

    int multiplication(){
        int a,b;
        printf("Enter First Number :- ");
        scanf("%d",&a);
        printf("Enter Second Number :- ");
        scanf("%d",&b);

        int multi = a*b;
        return multi;
    }

    int main(){

        int ans = multiplication();
        printf("ans is = %d",ans);
 
        return 0;
    }