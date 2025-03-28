#include<stdio.h>
int main(){
// Write a program to print all the number of 5 between 1 and 100.
    int ep;
    printf("Enter Ending Number :- ");
    scanf("%d",&ep);

    int multi;
    printf("Enter by Multiply :- ");
    scanf("%d",&multi);

    for(int i=1;i<=ep;i++){
        if(i%multi==0){
            printf("%d\n",i);
        }
    }
    return 0;
}