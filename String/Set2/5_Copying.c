#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    printf("Enter First String:- \n");
    fgets(str,sizeof(str),stdin);
    char str2[100];
    printf("Enter second String:- \n");
    fgets(str2,sizeof(str2),stdin);
    for(int i=0;str[i]!='\0';i++){
        str[i]=str2[i];
    }
    printf("First String \n");
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    printf("Second String \n");
    for(int i=0;str2[i]!='\0';i++){
        printf("%c",str2[i]);
    }

    return 0;
}