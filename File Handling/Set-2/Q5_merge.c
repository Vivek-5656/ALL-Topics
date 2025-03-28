#include<stdio.h>
#include<string.h>
int main(){
    // FILE *file=fopen("first.txt","w");
    // char str[]="Coding age";
    // fputs(str,file);
    // file=fopen("second.txt","w");
    // char ttr[]=" Vivek Kumar";
    // fputs(ttr,file);


    FILE *file=fopen("first.txt","r");
    char str[100];
    fgets(str,sizeof(str),file);

    file=fopen("second.txt","r");
    char ttr[100];
    fgets(ttr,sizeof(ttr),file);

    file=fopen("third.txt","w");
    fputs(str,file);
    fputs(ttr,file);
     

    fclose(file);
    printf("Files Copied");


    return 0;
}