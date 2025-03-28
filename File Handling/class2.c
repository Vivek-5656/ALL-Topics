#include<stdio.h>
#include<string.h>
int main(){
   
    // // -------------------------write strings-------------
    // FILE *file = fopen("string.txt","w");
    // char str[100];
    // fgets(str,sizeof(str),stdin);
    // fputs(str,file);
    // --------------------------Read String-------------------
    // FILE *file=fopen("string.txt","r");
    // char str[100];
    // fgets(str,sizeof(str),file);
    // puts(str);
    // -----------------using loop---------------
    FILE *file=fopen("string.txt","r");
    char str[100];
    while(fgets(str,sizeof(str),file)){
        puts(str);
        
    }

    return 0;
}