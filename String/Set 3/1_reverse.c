#include<stdio.h>
#include<string.h>
// Write a program to print individual characters of a string in reverse order.

int main(){
    char str[100];
    printf("Enter String:- \n");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    int s=strlen(str)-1;
    for(int i=s;i>=0;i--){
        printf("%c",str[i]);
    }

    return 0;
}