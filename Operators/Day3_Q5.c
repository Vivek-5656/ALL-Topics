#include<stdio.h>

int main(){

    int a;
    printf("Enter a:- ");
    scanf("%d",&a);

    int b;
    printf("Enter b:- ");
    scanf("%d",&b);

    if(a > b){
        printf("a is largest.");
    } if(b > a){
        printf("b is largest.");
    } if(a == b){
        printf("both equal");
    }

    return 0;
}