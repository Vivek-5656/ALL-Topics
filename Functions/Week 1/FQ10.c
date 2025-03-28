#include<stdio.h>
// Write a function to check whether a number is even or odd.
    void check();

    int main(){

        check();
        check();

        return 0;
    }

    void check(){
        int num;
        printf("Enter number :- ");
        scanf("%d",&num);

        if(num%2==0){
            printf("%d is Even.\n",num);
        } else{
            printf("%d is Odd.\n",num);
        }
    }