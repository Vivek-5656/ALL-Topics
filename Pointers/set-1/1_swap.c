#include<stdio.h>
// Write a program to swap two numbers using pointers and functions. (call by reference)
void swap(int *a,int *b){
    
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("Enter a:- ");
    scanf("%d",&a);
    printf("Enter b:- ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}