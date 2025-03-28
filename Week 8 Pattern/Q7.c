
#include <stdio.h>

int main() {
// * 
// * * 
// * * * 
// * * 
// * 
    int n;
    printf("Enter number :- ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
         
    }
    
    int v=n-1;

    for(int a=1;a<=v;a++){
        for(int b=v;b>=a;b--){
            printf("* ");
        }

        printf("\n");
    }

    

    return 0;
}