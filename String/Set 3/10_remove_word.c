#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter String:- \n");
    fgets(str,sizeof(str),stdin);
    int found=1;
    // char check[100];
    // printf("Check this String:- \n");
    // fgets(check,sizeof(check),stdin);
    char copy[100];
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            str[i]=copy[i];
        }
    }
    for(int i=0;copy[i]!='\0';i++){
        printf("%s",copy[i]);
    }
    

    return 0;
}