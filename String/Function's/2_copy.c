#include<stdio.h>
#include<string.h>
int main(){
    char src[100];
    printf("Enter string:- ");
    fgets(src,sizeof(src),stdin);

    char dst[100];
    strcpy(dst,src);
    // puts(dst);
    printf("Copied String:- %s",dst);


    return 0;
}