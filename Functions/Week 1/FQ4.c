#include<stdio.h>
// Take a number from the user and return the sum of all numbers up to the given number using a function.
    int sum(int n);

    int main(){
        int x;
        printf("Enter a number :- ");
        scanf("%d",&x);

        int ans = sum(x);

        printf("ans is = %d",ans);

        return 0;
    }

    int sum(int n){
         
        int total=0;
        for(int i=1;i<=n;i++){
            total=total+i;
        }
        return total;
    }