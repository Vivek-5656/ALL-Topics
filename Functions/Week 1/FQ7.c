#include<stdio.h>
// ------------------------ Reverse a Number -------------------------------
    int reverse();

    int main(){

        int reverseNum = reverse();
        printf("Reverse Number is = %d",reverseNum);
        return 0;
    }

    int reverse(){
        int num;
        printf("Ente any number :- ");
        scanf("%d",&num);

        int rev = 0;
        int rm;
        while(num !=0){
            rm=num%10;
            rev=rev*10+rm;
            num=num/10;
        }
        return rev;
    }