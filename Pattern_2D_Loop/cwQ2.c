#include<stdio.h>

int main(){
// 1
// 23
// 456
    int n;
    printf("Enter largrest number n :- ");
    scanf("%d",&n);
    int i,j;
    int a=1;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){

            printf("%d",a);
            a++;

        }
        printf("\n");
     }

    return 0;
}