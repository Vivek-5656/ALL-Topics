#include<stdio.h>
#include<string.h>
int main(){
    char firststr[] = "VVVA";
    char secstr[] = "VVVC";
    printf("%d", strcmp(firststr,secstr));
     
    return 0;
}