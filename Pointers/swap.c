#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int x,y;
    printf("Enter first number:- ");
    scanf("%d",&x);
    printf("Enter second number:- ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("The value of x is [%d]\n",x);
    printf("The value of y is [%d]",y);

    return 0;
}