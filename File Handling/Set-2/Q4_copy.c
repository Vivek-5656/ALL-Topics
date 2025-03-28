#include<stdio.h>
#include<string.h>
// -----------------------Copied from one file to another file----------------------
int main(){
    // FILE *file=fopen("real.txt","w");
    // char str[100];
    // fgets(str,sizeof(str),stdin);
    // fputs(str,file);
    

    FILE *file=fopen("real.txt","r");
    char str[100];
    if(file==NULL){
        printf("Error Written\n");
        return 1;
    }
    fgets(str,sizeof(str),file);
    // puts(str);

    file=fopen("copy.txt","w");
    fputs(str,file);

    fclose(file);
    printf("real.txt cpied successfully in copy.txt.");

    return 0;
}