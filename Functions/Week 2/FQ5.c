#include<stdio.h>
// Write a program to call a function that takes user input and pass it to a function that prints its table.

    void table(){
        int num;
        printf("Enter Number :- ");
        scanf("%d",&num);
        
        int t = 1;
        for(int i=1;i<=10;i++){
            t=i*num;
            printf("%d * %d = %d\n",i,num,t);
        }

       
    }

    int main(){
        table();
        table();
        table();
        return 0;
    }