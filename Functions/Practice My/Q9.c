#include<stdio.h>
//Write a function fibonacci that prints the first n terms of the Fibonacci sequence. Call it from main().

void fibonacciSequence(){
    int num;
    printf("Enter Number :- ");
    scanf("%d",&num);
    int a=0;
    int b=1;
    printf("%d%d",a,b);

    for(int i=2;i<num;i++){
        int c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}
void helloProgramer(){
    printf("Hello, welcome to C programming!\n");
}

int main(){
    helloProgramer();
    fibonacciSequence();
    return 0;
}