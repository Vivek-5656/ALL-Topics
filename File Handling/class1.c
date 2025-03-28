#include<stdio.h>
int main(){
    // ------------------Write single character using fputc.-----------------------
    // FILE *file = fopen("data.txt","w");
    // fputc('a',file);
    // // char c='B';
    // fputc('C',file);
    // ------------------Read single character using fputc.-----------------------
    // FILE *read = fopen("data.txt","r");
    // char ch = fgetc(read);
    // printf("%c",ch);
    // ------------------ read all character using loop.-----------------------
    FILE *read = fopen("data.txt","r");
    char c;
    int i=1;
    while ((c=fgetc(read)) != EOF){
        printf("%d = %c\n",i++,c);
    }
     
    

    return 0;
}