#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    printf("Enter string 1:- ");
    fgets(str,sizeof(str),stdin);

    char ttr[200];
    printf("Enter string 2:- ");
    fgets(ttr,sizeof(ttr),stdin);

    if(strcmp(str,ttr)==0){
        printf("String are Equal");
    } else{
        printf("Strings are not Equal");
    }

    return 0;
}