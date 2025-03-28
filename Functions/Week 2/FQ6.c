#include<stdio.h>
// Write a program to call a function that prints the following pattern.
//    *
//   ***
//  *****

    void pattern(){
        int n=3;
        int p=1;
        for(int i=1;i<=n;i++){
            for(int j=n;j>=i;j--){
                printf("  ");
            }

            for(int k=1;k<=p;k++){
                printf("* ");
            }
            p=p+2;
            printf("\n");
        }
    }

    int main(){
        pattern();
        return 0;
    }