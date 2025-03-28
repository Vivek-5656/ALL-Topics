#include<stdio.h>

// take nothing and return nothing
// Non return

    void evenOdd();
    int main(){
        evenOdd();
        evenOdd();

        return 0;
    }
   
    void evenOdd(){
        int n;
        printf("Enter a number :- ");
        scanf("%d",&n);
        if(n%2==0){
            printf("%d is even.\n",n);
        } else{
            printf("%d is Odd.\n",n);
        }
    }
    