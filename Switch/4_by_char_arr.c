#include<stdio.h>
int main(){
// By Char Array 
    int size=10;
    char str[10]= {'a','b','c','d'};
    for(int i=0;str[i]!='\0';i++){
        putchar(str[i]);
    }

    return 0;
}