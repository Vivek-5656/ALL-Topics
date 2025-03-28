#include<stdio.h>
#include<string.h>
int main(){
    // FILE *real=fopen("one.txt","w");
    // char arr[200]="Hello Vivan How are you.";
    // fputs(arr,real);
    FILE *source=fopen("one.txt","r");
    char crr[200];
    FILE *targetfile=fopen("targe.txt","w");
    while((crr[200]=fgetc(source))!=EOF){
        fputc(crr[200],targetfile);
    }

     

    return 0;
}