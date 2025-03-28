#include<stdio.h>
#include<string.h>
int main(){
    // FILE *file=fopen("reverse.txt","w");
    // char str[100];
    // fgets(str,sizeof(str),stdin);
    // fputs(str,file);

    FILE *file=fopen("reverse.txt","r");
    char str[100];
    fgets(str,sizeof(str),file);
    puts(str);
    int len=strlen(str);
    printf("Length = %d\n",len);

    // file=fopen("rev.txt","w");
    // char ttr[];
    file=fopen("rev.txt","w");
    for(int i=len-1;i>=0;i--){
        fputc(str[i],file);
    }
    


    fclose(file);

    return 0;
}