#include<stdio.h>
int main(){
    char str[100];
    char *ptr=str;
    printf("Enter String:- \n");
    fgets(ptr,sizeof(str),stdin);
    int count=0;
    for(int i=0;ptr[i]!='\0';i++){
        count++;
    }
    int length = count-1;
    printf("After Reverse:- \n");
    for(int i=length-1;i>=0;i--){
        printf("%c",*(ptr+i));
    }

    return 0;
}