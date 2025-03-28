#include<stdio.h>
// Write a program to call a function that returns the substraction of two numbers and print the result.

    int substraction(){
        int a = 45;
        int b = 15;        
        
        int sub = a - b;
        return sub;
    }

    int main(){

        int ans = substraction();
        printf("ans is = %d",ans);
        return 0;
    }