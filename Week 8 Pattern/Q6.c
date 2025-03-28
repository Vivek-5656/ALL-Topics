// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num;
    printf("Enter number :- ");
    scanf("%d",&num);
    
    char n='a';
    
    for(int i=97;i<=num;i++){
        for(int j=97;j<=i;j++){
            printf(" %c",n);
            n=n+1;
        }
        printf("\n");
    }

    return 0;
}