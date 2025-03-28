#include<stdio.h>

int main(){

    char ch;
    printf("Enter your character:- ");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("lowercase");
    } else if(ch >= 'A' && ch <= 'Z'){
        printf("UPPERCASE");
    }

    return 0;
}