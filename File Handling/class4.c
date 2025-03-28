#include<stdio.h>
//---------Binary---------
int main(){
    // FILE *file=fopen("data.bin","wb");
    // char str[]="Coding Age";

    // fwrite(str,sizeof(str),1,file);

    FILE *file=fopen("data.bin","rb");
    char str[100];
    fread(str,sizeof(str),1,file);
    puts(str);

    return 0;
}