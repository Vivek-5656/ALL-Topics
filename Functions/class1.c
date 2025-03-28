#include<stdio.h>
// Declaration and define together 
    void power(){
        int b,p;
        printf("Enter b:- ");
        scanf("%d",&b);
        printf("Enter p:- ");
        scanf("%d",&p);
        int a=1;
        for(int i=1;i<=p;i++){
            a=a*b;
        }
        printf("power is %d",a);

    }
    int main(){
        power();
        return 0;
    }
