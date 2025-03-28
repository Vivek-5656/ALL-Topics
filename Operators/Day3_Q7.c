#include<stdio.h>

int main(){

    int a,b;
    printf("Enter a:- ");
    scanf("%d",&a);

    printf("Enter b:- ");
    scanf("%d",&b);

    if(a%2==0 && a==b){
        printf("True");
    } else{
        printf("False");
    }
    return 0;
}