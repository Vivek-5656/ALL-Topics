#include<stdio.h>

int main(){
// Write a program to taka the alphabet from the user and print from 'a' to user input. (input=alpha=d) (output=a b c d)

    char starChar='a';

    char alpha;
    printf("Enter alpha :- ");
    scanf("%c",&alpha);

    for(starChar; starChar <= alpha; starChar++){
        printf(" %c",starChar);
    }

    return 0;
}