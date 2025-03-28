#include<stdio.h>
//Create a program where a global variable and a local variable have the same name. Use functions to demonstrate the scope of these variables.
int n=8;

void number(int n){
    int c = n * n;
    printf("%d",c);
}

int main(){
    number(5);
    return 0;
}