#include<stdio.h>
#include<string.h>
// Write a program to calculate the length of a string using two methods:  (Using Loop)
int main(){
    char str[100];
    printf("Enter String:- \n");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    int c=count-1;
    printf("Length of String = %d\n",c);

    // Using strlen()
    int size=strlen(str)-1;
    printf("Size of String = %d",size);

    return 0;
}