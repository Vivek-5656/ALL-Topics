#include<stdio.h>

int main(){

    int n1;
    printf("Enter first num :- ");
    scanf("%d",&n1);

    int n2;
    printf("Enter second num :- ");
    scanf("%d",&n2);

    int table;
    for(;n1<=n2;n1++){
        for(int sp=1;sp<=10;sp++){
        table=n1*sp;
        printf("%d * %d = %d\n",n1,sp,table);
        }
        printf("\n");
    }

    return 0;
}