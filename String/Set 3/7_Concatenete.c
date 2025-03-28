#include<stdio.h>
#include<string.h>
// . Write a program to concatenate two strings in a single string.
int main(){
    char str[100];
    char str2[100];
    printf("Enter First String:- \n");
    fgets(str,sizeof(str),stdin);
    printf("Enter Second String:- \n");
    fgets(str2,sizeof(str2),stdin);
    int size=strlen(str)-1;
    for(int i=0;str[i]!='\0';i++){
        str[size+i]=str2[i];
    }
    printf("After Concateniting:- \n");
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }

    return 0;
}