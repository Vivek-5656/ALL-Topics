#include<stdio.h>
#include<string.h>
int main(){
    FILE *file=fopen("ap.txt","a");
    char str[]="Coding Age Vivek anand";

    fprintf(file,"%s",str);

    fclose(file);
    printf("Data Appended Successfully");
    return 0;
}