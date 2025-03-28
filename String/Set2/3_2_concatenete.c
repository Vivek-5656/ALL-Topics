#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter First String:- \n");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    char str2[100];
    printf("Enter Second String:- \n");
    fgets(str2,sizeof(str2),stdin);
    printf("%s",str2);
    strcat(str,str2);
    printf("%s",str);
    // Pending

    return 0;
}