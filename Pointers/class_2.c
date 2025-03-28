#include<stdio.h>
int main(){
    // Store address of variable
    int a=5;
    int *x=&a;
    printf("Address of a = %p",x);

    return 0;
}