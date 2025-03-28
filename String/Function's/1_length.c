#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter string:- ");
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    printf("length = %d",len-1);



    return 0;
}