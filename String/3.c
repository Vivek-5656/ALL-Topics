#include<stdio.h>
int main(){
    int size=10;
    char str[size];
    // printf("Enter String's:- \n");
    for(int i=0;i<size;i++){
        str[i]=getchar();
    }
    // printf("String Elements:- \n");
    for(int i=0;i<size;i++){
        putchar(str[i]);
    }

    return 0;
}