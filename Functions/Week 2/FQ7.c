#include<stdio.h>
// Count Digit of Given Number..
    void digitCount(int num){
        int i=num;
        int count = 0;
        while(num != 0){
            count ++;
            num=num/10;
        }
        
        printf("Count is = %d\n",count);
        reverseNumber(i);

        
    }
    
// Reverse Number 

    void reverseNumber(int num){
        
        int rev=0;
        int rem;
        while (num!=0){
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        printf("Reverse Number is = %d\n",rev);
        
    }

    int main(){
        int number;
        printf("Enter number :- ");
        scanf("%d",&number);
        digitCount(number);
        // reverseNumber(number);

        return 0;
    }