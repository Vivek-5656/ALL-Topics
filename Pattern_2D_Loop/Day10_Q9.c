#include<stdio.h>

int main(){
// * * *
//  * *
//   *

    int num;
    printf("Enter num :- ");
    scanf("%d",&num);

    int a;
    int b;
    int c;
    for(a=1;a<=num;a++){
        for(b=1;b<=a;b++){
            printf(" ");
        } 

        for(c=num;c>=a;c--){
            printf(" *");
        }
 
         printf("\n");
    }


    return 0;
}