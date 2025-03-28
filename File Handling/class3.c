#include<stdio.h>
int main(){
// use of fscanf read file
    // FILE *file=fopen("new.txt","r");
    // char ch;
    // fscanf(file,"%c",&ch);
    // printf("Character = %c",ch);
// use of fprintf write file
    // FILE *file=fopen("new.txt","w");
    
    // fprintf(file,"%c",'M');
    // fprintf(file,"%c",'A');
    // fprintf(file,"%c",'N');
    // fprintf(file,"%c",'G');
    // fprintf(file,"%c",'O');
// use of fprintf append file
    FILE *file=fopen("new.txt","a");
    fprintf(file,"%c",'V');
    fprintf(file,"%c",'I');
    fprintf(file,"%c",'V');
    fprintf(file,"%c",'E');
    fprintf(file,"%c",'K');

    fclose(file);
    printf("")
    return 0;
}