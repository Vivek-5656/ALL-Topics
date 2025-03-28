#include<stdio.h>
#include<string.h>
// Concatenates first string with second string.
int main(){
    char str[100] = "Hello ";
    char str2[50] = "Vivek";
    strcat(str,str2);
    puts(str);

    return 0;
}