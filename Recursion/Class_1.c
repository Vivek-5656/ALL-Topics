#include<stdio.h>

int sumofallNumber(int n){
    if(n==1){
        return 1;
    }

    return n+sumofallNumber(n-1);
}

int main(){
    int n;
    printf("Enter number :- ");
    scanf("%d",&n);

    int ans = sumofallNumber(n);
    printf("ans = %d",ans);

    return 0;
}