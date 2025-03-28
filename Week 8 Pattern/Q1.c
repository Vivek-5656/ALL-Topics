  #include<stdio.h>

int main(){
// * # * #
// * # * #
// * # * #

    int num;
    printf("Enter num :- ");
    scanf("%d",&num);
   
    for(int a=1;a<=num;a++){
         for(int b=1;b<=num;b++){
             if(b%2!=0){
                 printf("* ");
             } else{
                 printf("# ");
             }
         }
        printf("\n");
    }
     

    return 0;
}