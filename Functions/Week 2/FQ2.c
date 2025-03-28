#include<stdio.h>
//  Write a program to call a function that prints the multiplication of two numbers.

    void multiplication(){
        int a = 150;
        int b = 2;
        
        int c = a * b;
        printf("Multiple is = %d\n",c);
    }

    int main(){

        multiplication();

        return 0;
    }