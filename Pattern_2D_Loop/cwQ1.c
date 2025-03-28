#include<stdio.h>

int main(){
// 123
// 12
// 1
    int i;
    printf("Enter largest number  i :- ");
    scanf("%d",&i);
    int j;
    for(;i>=1;i--){
        for(j=1;j<=i;j++){

            printf("%d",j);

        }
        printf("\n");
     }

    return 0;
}