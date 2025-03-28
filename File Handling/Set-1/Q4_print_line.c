#include<stdio.h>
#include<string.h>
// Program to read a file line by line using 
// Input:
//  A file named // input.txt with the content:
//  This is line 1.
//  This is line 2.
//  Expected Output:
//  This is line 1.
//  This is line 2
int main(){
    // FILE *file=fopen("line.txt","w");
    FILE *file=fopen("line.txt","r");
    char ch[200];
    while(fgets(ch,sizeof(ch),file)!=NULL){
        printf("%s",ch);
    }


    return 0;
}