#include<stdio.h>
#include<string.h>
//Write a program to count the total number of alphabets, digits and special characters in a string.
int main(){
    char str[100];
    printf("Enter String:- \n");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    int alpha=0,digit=0,spcl=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&& str[i]<='Z'||str[i]>='a'&& str[i]<='z'){
            alpha++;
        } else if(str[i]>='0'&& str[i]<='9'){
            digit++;
        } else{
            spcl++;
        }
    }
    printf("Alphabet:- %d\nDigit:- %d\nSpecial Character:- %d",alpha,digit,spcl);

    return 0;
}