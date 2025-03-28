#include<stdio.h>
#include<string.h>
// Write a program to copy one string into another using two methods:
int main(){
    char str[200];
    printf("Enter First String:- \n");
    fgets(str,sizeof(str),stdin);
    char str2[100]; 
    strcpy(str2,str);
    puts(str2);

    return 0;
}