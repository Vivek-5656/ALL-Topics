#include<stdio.h>

int main(){
// **** 
// ####
// ****
// ####
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    int i;
    int j;
  
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i%2==0){
                printf("# ");
            }    
            else{
                printf("* ");
            }
        }
         
        printf("\n");
    }

   

    return 0;
}