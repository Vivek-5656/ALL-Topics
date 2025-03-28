#include<stdio.h>

int main(){
// a b c 
// d e f 
// g h i

    int alpha;
    printf("Enter ending alpha :- ");
    scanf("%d",&alpha);

    char n='a';

    for(int i=97;i<alpha;i++){
        for(int j=97;j<alpha;j++){
            
            printf(" %c",n);
            n=n+1;
        }
        printf("\n");
    }

    return 0;
}