 #include<stdio.h>
int main(){
//  * * * * * *
//  * *     * *
//  *         *
//  *         *
//  * *     * *
//  * * * * * *   (Print this pattern).
  int num;
  printf("Enter largest number :- ");
  scanf("%d",&num);
  
   

  int a;          // outer loop
  int b;          // for first stars printing
  int c; 
  int d;
  int e;          // for last stars printing
  for(a=1;a<=num;a++){
    for(b=num;b>=a;b--){
      printf(" *");
    }
    for(c=1;c<=a;c++){
        if(c==1){
            printf("");
        } else{
            printf("  ");
        }
     }
     for(d=1;d<=a;d++){
         if(d==1){
             printf("");
         } else{
             printf("  ");
         }
     }
    for(e=num;e>=a;e--){
        printf(" *");
    }
    
    printf("\n");

  }
  //// Second loop
  int i;
  int j;
  int k;
  int l;
  int m;
  
  for(i=1;i<=num;i++){
      for(j=1;j<=i;j++){
        printf(" *");
     }
     
     for(k=num;k>=i;k--){
          if(k==num){
              printf("");
          } else{
              printf("  ");
          }
     }
     
     for(l=num;l>=i;l--){
        if(l==num){
            printf("");
        } else{
            printf("  ");
        }
     }
     
     for(m=1;m<=i;m++){
          printf(" *");
     }
     
     printf("\n");
  }
  
  return 0;
}