#include<stdio.h>
#include<string.h>
int main(){
    FILE *file=fopen("exm.txt","w");
    char str[100];
    if(file==NULL){
        printf("Error\n");
        return 1;
    }
    fgets(str,sizeof(str),stdin);
    fputs(str,file);
 

    fclose(file);
    printf("File Written Successfully");

    return 0;
}