#include<stdio.h>

int main(){
    int a,b;
    printf("Enter first Number :- ");
    scanf("%d",&a);
    printf("Enter Second Number :- ");
    scanf("%d",&b);
    int gcd;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("Greatest Common Factor :- %d",gcd);

    return 0;
}