#include<stdio.h>
#include<string.h>
int main(){
    // FILE *read=fopen("example.txt","w");
    // char str[100];
    // printf("Enter strng:- ");
    // fgets(str,sizeof(str),stdin);
    // fputs(str,read);

    FILE *read=fopen("example.txt","r");
    char str[100];
    if(read==NULL){
        printf("Error File\n");
        return 1;
    }
    printf("content of the file: \n");
    fgets(str,sizeof(str),read);
    puts(str);



    fclose(read);
    printf("Written Successfully");

    return 0;
}