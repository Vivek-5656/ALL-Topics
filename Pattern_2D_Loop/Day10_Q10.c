 #include<stdio.h>

int main(){
//   *
//  ***
// *****

    int num;
    printf("Enter num :- ");
    scanf("%d",&num);

    int i=1;
   
    for(int a=1;a<=num;a++){
        for(int c=num;c>=a;c--){
            printf("  ");
        }

        for(int b=1;b<=i;b++){
            printf("* ");
        }
        i=i+2;
        
        printf("\n");
    }
     

    return 0;
}