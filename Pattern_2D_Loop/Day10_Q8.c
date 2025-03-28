#include<stdio.h>

int main(){
// ***
//  **
//   *

    int n;
    printf("Enter n :- ");
    scanf("%d",&n);

    int a;
    int b;
    int c;
    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
            printf(" ");
        } 

        for(c=n;c>=a;c--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}