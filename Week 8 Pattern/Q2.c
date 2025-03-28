#include<stdio.h>

int main(){
// 1 2 3
// 4 5 6
// 7 8 9

    int n;
    printf("Enter large number :- ");
    scanf("%d",&n);
    int num=0;
    for(int a=1;a<=n;a++){
        for(int b=1;b<=n;b++){
            num=num+1;
            printf("%d",num);
        }
        printf("\n");
    }

    return 0;
}