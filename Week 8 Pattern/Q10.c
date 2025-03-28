#include<stdio.h>

int main(){
//    * 
//   * * 
//  * * * 
//   * *
//    *
    int n;
    printf("Enter num :- ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf(" ");
        }

        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    
    int v=n-1;
    
    for(int a=1;a<=v;a++){
        for(int b=1;b<=a;b++){
            printf(" ");
        }
        
        for(int c=v;c>=a;c--){
            printf(" *");
        }
        
        printf("\n");
    }
    
    

    return 0;
}