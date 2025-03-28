#include<stdio.h>

int main(){

    int num;
    printf("Enter num:- ");
    scanf("%d",&num);

    if(num%2==0){
        printf("it's even number.");
    } else{
        printf("it's odd number.");
    }

    return 0;
}