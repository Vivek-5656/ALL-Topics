#include<stdio.h>
#include<string.h>
// Convert all letters in the string to lowercase
int main(){
    char str[100];
    printf("Enter String:- \n");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&& str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    printf("LowerCase:- %s",str);

    return 0;
}