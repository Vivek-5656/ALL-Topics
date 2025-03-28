#include<stdio.h>
// Non-Return Types
// take something and return nothing
void multi(int a, int b);

int main(){

    int x,y;
    printf("Enter first number :- ");
    scanf("%d",&x);
    printf("Enter second number :- ");
    scanf("%d",&y);
    multi(x,y);


    return 0;
}

void multi(int a, int b){
    int c=a*b;
    printf("Multi is %d",c);
}