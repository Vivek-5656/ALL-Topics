#include<stdio.h>
// Write a program to call a function that prints the following pattern 
    void pattern();

    int main(){

        pattern();

        return 0;
    }

    void pattern(){
        int n;
        printf("Enter a number :- ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                printf("* ");
            }
            printf("\n");
        }
    }