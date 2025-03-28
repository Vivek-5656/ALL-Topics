#include<stdio.h>
// Write a program to call a function that takes two user inputs and passes it to a function that returns the addition of these numbers.

    int addtion(){
        int a,b;
        printf("Enter First Number :- ");
        scanf("%d",&a);
        printf("Enter Second Number :- ");
        scanf("%d",&b);

        int add = a + b;
        return add;
    }

    int main(){

        int store = addtion();
        printf("addition is = %d",store);
    
        return 0;
    }