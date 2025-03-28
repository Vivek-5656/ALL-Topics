#include<stdio.h>
// --------------------------------------------: Reverse Number ------------------------------------------------
int reverseNumber(int n, int rev){
    if(n==0){
        return rev;
    }
    int rem=n%10;
    rev=rev*10+rem;

    return reverseNumber(n/10,rev);
}

int main(){
    int number;
    printf("Enter number :- ");
    scanf("%d",&number);

    int reverse = reverseNumber(number,0);
    printf("Reverse = %d",reverse);
    
    return 0;
}