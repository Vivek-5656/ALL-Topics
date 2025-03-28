#include<stdio.h>
int main(){
// Write a program that takes a string input from the user and counts the total number of characters in the string. Print the result.

    int size=100;
    char str[size];
    printf("Enter Character:- \n");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    int c=0;
    for(int i=0;str[i]!='\0';i++){
        c++;
    }
    printf("Total Number of Character = %d",c-1);

    return 0;
}