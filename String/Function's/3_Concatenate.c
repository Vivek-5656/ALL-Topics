#include<stdio.h>
#include<string.h>
int main(){
    char str1[200];
    printf("Enter First String:- ");
    fgets(str1,sizeof(str1),stdin);

    char str2[100];
    printf("Enter Seconf String:- ");
    fgets(str2,sizeof(str2),stdin);

    strcat(str1,str2);
    printf("After Concatenate = %s",str1);


    return 0;
}