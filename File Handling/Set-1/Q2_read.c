#include<stdio.h>
#include<string.h>
// Program to read the contents of a text file and display them on the console.
//  File Handling
// Objective Write a program that reads from a file and displays its content on the console.
//  Input:
//  A file named 
// input.txt with the content:
//  This is a test file.
//  It contains some text.
//  Expected Output:
//  This is a test file.
//  It contains some text.
int main(){
    // FILE *file=fopen("input.txt","w");
    FILE *file=fopen("input.txt","r");
    char c;
    while((c=fgetc(file))!=EOF){
        printf("%c",c);
        // putchar(c);
    }


    return 0;
}