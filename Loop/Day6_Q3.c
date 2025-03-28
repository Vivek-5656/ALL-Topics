#include<stdio.h>

int main(){
// Write a program to print alphabets from a to z; (output=a,b,c................x,y,z)
    //  int sp;
    //  int ep=90;
    
    // for(sp=65;sp<=ep;sp++){
    //     printf("%c \n",sp);
    // }

    char sp;
    printf("Enter start:- ");
    scanf("%c",&sp);

    char ep;
    printf("Enter end:- ");
    scanf(" %c",&ep);

    while(sp <= ep){
        printf(" %c",sp);
        sp++;
    }

    return 0;
}