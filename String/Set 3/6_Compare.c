#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter String:- \n");
    fgets(str,sizeof(str),stdin);
    int found=1;
    char check[100];
    printf("Check this String:- \n");
    fgets(check,sizeof(check),stdin);
    for(int i=0;str[i]!='\0'||check[i]!='\0';i++){
        if(str[i]!=check[i]){
            found=0;
        }
    }
    if(found){
        printf("Strings are equal");
    } else{
        printf("Different String");
    }

    return 0;
}