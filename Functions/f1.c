#include<stdio.h>

// Take nothing and return something.
    int m();
    int main(){

        int multi = m();
        printf("Multi is %d",multi);


    return 0;
}
  


int m(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a*b;

    return c;
        
    }
