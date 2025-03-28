// Write a program to swap two numbers using pointers.
#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    printf("Enter a:- ");
    scanf("%d",&a);
    printf("Enter b:- ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a = %d\nb = %d",a,b);

    return 0;
}