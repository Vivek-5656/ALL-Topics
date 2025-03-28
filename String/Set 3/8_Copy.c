#include<stdio.h>
#include<string.h>
// Write a program to copy one string to another string .
int main(){
    char main[100];
    char copy[100];
    printf("Enter First String:- \n");
    fgets(main,sizeof(main),stdin);
    printf("Enter Second String:- \n");
    fgets(copy,sizeof(copy),stdin);
    for(int i=0;main[i]!='\0';i++){
        main[i]=copy[i];
    }
    printf("After Copied String:- \n");
    for(int i=0;main[i]!='\0';i++){
        printf("%c",main[i]);
    }

    return 0;
}