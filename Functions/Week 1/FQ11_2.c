#include<stdio.h>

    int rem(){
        int  n1,n2;
        printf("Enter dividend :- ");
        scanf("%d",&n1);
        printf("Enter Divider :- ");
        scanf("%d",&n2);
        float remainder = n1 % n2;
        return remainder;

        // printf("Remainder is = %f \n",remainder);  // 0.02

        
    }
     int main(){
        int result = rem();
        printf("Result = %d",result);
        
        return 0;
    }