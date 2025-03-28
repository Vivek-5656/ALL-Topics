#include<stdio.h>
int main(){
// Write a program that allows the user to input a string and then prints the entered string.

    int size=100;
    char str[size];
    printf("Enter String:- \n");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    

    return 0;
}