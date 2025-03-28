#include<stdio.h>

int main(){

    int n;
    printf("Enter num:- ");
    scanf("%d",&n);
    int next=0;

    int a=0,b=1;
    printf("%d %d",a,b);
    for(int i=1;i<=n;i++){
       next=a+b;
       printf(" %d",next);
       a=b;
       b=next;
    }

    return 0;
}