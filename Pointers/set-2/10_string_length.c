#include<stdio.h>
int main(){
    char str[100];
    char *ptr=str;
    int count=0;
    printf("Enter String:- \n");
    fgets(ptr,sizeof(str),stdin);
    printf("%s",ptr);
    for(int i=0;ptr[i]!='\0';i++){
        count++;
    }
    int length = count-1;
    printf("Length of this string is :- %d",length);

    return 0;
}