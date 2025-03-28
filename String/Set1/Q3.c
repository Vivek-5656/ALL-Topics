#include<stdio.h>
int main(){
// Write a program to separate individual characters from a string.

    int size=100;
    char str[size];
    printf("Enter string:- \n");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        printf("[%c]",str[i]);
    }

    return 0;
}