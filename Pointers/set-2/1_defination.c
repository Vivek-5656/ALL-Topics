#include<stdio.h>
int main(){
    int num = 10; // initialize and declare normal integer variable
    int *p = &num; // initialize and declare pointer variable with num address.
    printf("address:- %p\nvalue of num:- %d",p,*p);

    return 0;
}