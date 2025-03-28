#include<stdio.h>
int main(){
    char str[100];
    char *ptr=str;
    printf("Enter String:- \n");
    fgets(ptr,sizeof(str),stdin);
    char atr[100];
    char *ctr=atr;
    printf("Enter 2nd String:- \n");
    fgets(ctr,sizeof(atr),stdin);
    int c=0,c2=0;
    for(int i=0;ptr[i]!='\0';i++){
        c++;
    }
    int len1=c-1;
    for(int i=0;ctr[i]!='\0';i++){
        c2++;
    }
    int len2=c2-1;
    printf("First String length :- [%d]\nSecond String length:- [%d]",len1,len2);
    for(int i=0;i<len1+len2;i++){
        ptr[i+len1]=ctr[i];
    }
    printf("\nAfter Concatenate:- \n");
    printf("%s",ptr);


    return 0;
}