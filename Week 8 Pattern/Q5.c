
#include <stdio.h>

int main() {
// 1
// 23
// 456
    int num;
    printf("Enter number :- ");
    scanf("%d",&num);
    
    int n=0;
    
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            n=n+1;
            printf("%d",n);
        }
        printf("\n");
    }

    return 0;
}