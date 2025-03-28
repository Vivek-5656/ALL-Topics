#include<stdio.h>
int main(){
// Write a program to take a number from the user and print from 1 to till the user's input. (input=5) (output= 1 2 3 4 5)
    int sp=1;

    int ep;
    printf("Enter Ending point:- ");
    scanf("%d",&ep);

    while (sp<=ep){
        printf("%d\n",sp);
        sp++;
    }
    

    return 0;
}