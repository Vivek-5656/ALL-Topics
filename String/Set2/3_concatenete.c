#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char str2[100];
    printf("Enter First String:- \n");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    printf("Enter Second String:- \n");
    fgets(str2,sizeof(str),stdin);
    printf("%s",str2);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    int c=count-1;
    printf("Length of String = %d\n",c);
    
    for(int i=0;str[i]!='\0';i++){
        str[c+i]=str2[i];
    }
    printf("After Concatenete\n");
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }

    return 0;
}