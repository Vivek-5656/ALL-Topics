#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter String:- ");
    fgets(str,sizeof(str),stdin);
    int s = strlen(str)-1;
    printf("Size of str String:- %d",s);

    return 0;
}