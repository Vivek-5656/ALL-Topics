#include<stdio.h>
int main(){
    FILE *file=fopen("first.txt","a");
    char str[100]=" world";
    fputs(str,file);
    char ctr[100]=" coding";
    fputs(ctr,file);

    return 0;
}