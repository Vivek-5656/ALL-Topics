#include<stdio.h>

int main(){
// 12. Check whether a given number is prime.

    int num;
    printf("Enter number :- ");
    scanf("%d",&num);

    if(num > 0){
         for(int i=1;i<=num;i++){
            if(num%i==0){
                printf("prime number. %d",num);
            }
        }
    } else {
        printf("Not prime number.");
    }

    return 0;
}