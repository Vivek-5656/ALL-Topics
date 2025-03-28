#include<stdio.h>

int main(){
// Write a program to take the alphabet from the user and print from the user input till 'a'.
    char alpha;
    printf("Enter alphabet :- ");
    scanf("%c",&alpha);

    for(;alpha>='a';alpha--){
        printf(" %c",alpha);
    }

    return 0;
}