#include<stdio.h>

int main(){
    int num,rem,power,sum=0,count=0;
    printf("Enter number:- ");
    scanf("%d",&num);

    int original = num;
    // CountDigit
    while (original!=0) {
        original/=10;
        count++;
    }

    original=num;

    // Reverse and check
    while (original!=0){
        rem=original%10;

        power=1;
        for(int i=1;i<=count;i++){
            power=power*rem;
        }
        sum=power+sum;
        original/=10;
    }
    if(sum==num){
        printf("%d is Armstrong.",num);
    }
    else{
        printf("%d is Not Armstrong.",num);
    }
    
}