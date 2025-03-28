#include<stdio.h>
int main(){
// Write a program to copy one string to another string.

    int size=100;
    char str1[size];
    char str2[size];
    printf("Enter String:- \n");
    fgets(str1,sizeof(str1),stdin);
    printf("Original String:- %s",str1);
    for(int i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    printf("Copied String:- \n");
    for(int i=0;str2[i]!='\0';i++){
        printf("%c",str2[i]);
    }

    return 0;
}