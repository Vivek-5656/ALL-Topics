#include<stdio.h>

int main(){
//     *
//   * *
// * * *


     int n;
    printf("Enter Ending Number :- ");
    scanf("%d",&n);

    int a;
    int b;
    int c;

    for(a=1;a<=n;a++){
        
        for(b=n;b>=a;b--){
            printf(" ");
        }

        for(c=1;c<=a;c++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}