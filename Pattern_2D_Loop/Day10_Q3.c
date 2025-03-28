#include<stdio.h>

int main(){
// * * *
// * *
// *   (Print this pattern.)
    int i; 
    printf("Enter i :- ");
    scanf("%d",&i);

    int j;
     

    for(;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}