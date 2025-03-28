#include<stdio.h>
union numbers
{
    int a;
    float b;
};

int main(){
    union numbers num;
    printf("Enter Int Num:- ");
    scanf("%d",&num.a);
    printf("Number:- %d\n",num.a);

    printf("Enter Decimal:- ");
    scanf("%f",&num.b);
    printf("Decimal:- %.02f",num.b);

    return 0;
}