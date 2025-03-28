#include<stdio.h>
#include<string.h>
// Program to create a new text file and write "Coding Age" into it.
//  Objective Write a program that creates a text file and writes the string "Coding Age" to it.
//  Expected Output:
//  Coding Age
//  Instructions:
//  Open a file named newfile.txt in write mode ( Write "Coding Age" into the file. "w" ).
//   Print "Coding Age" to the console after successfully writing to the file.
int main(){
    // FILE *file=fopen("newfile.txt","w");
    // char str[100];
    // fgets(str,sizeof(str),stdin);
    // fputs(str,file);

    FILE *file=fopen("newfile.txt","r");
    char str[100];
    fgets(str,sizeof(str),file);
    puts(str);

    return 0;
}