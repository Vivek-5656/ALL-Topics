#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter String:- \n");
    fgets(str,sizeof(str),stdin);
    int c=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            c++;
        }
    }
    printf("The numbers of words in this String is = %d",c);

    return 0;
}