#include<stdio.h>
#include<string.h>
// Write a program to find the repeated character in a strin

int main(){
    char str[100];
    printf("Enter String:- \n");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    char s;
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                s=str[i];
            }
        }
    }
    printf("%c is repeated",s);

    return 0;
}