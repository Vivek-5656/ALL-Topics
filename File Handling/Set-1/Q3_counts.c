#include<stdio.h>
#include<string.h>
int main(){
    // char filename[100];
    // printf("Enter Filename:- ");
    // scanf("%s",filename);
    // getchar();
    // FILE *file=fopen(filename,"w");
    //         char str[100];
    //         printf("Enter string:- ");
    //         fgets(str,sizeof(str),stdin);
    //         fputs(str,file);
    // if(file==NULL){
    //     printf("Error openeing file\n");
    //     return 1;
    // }

    FILE *file=fopen("count.txt","r");
    char ch;
    int character=0,words=1,lines=1;
    while((ch=fgetc(file))!=EOF){
        character++;
        if(ch==' '){
            words++;
        }
        if(ch=='\n'){
            lines++;

        }
        
    }
    printf("Character = %d \nWords = %d \nLines = %d\n",character-words,words,lines);
    
    fclose(file);
    printf("Successful");

    return 0;
}