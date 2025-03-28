#include<stdio.h>

int main(){
// i) Write a C program to check whether a given character is a vowel or consonant using switch statements.

    char character;
    printf("Enter character:- ");
    scanf("%c",&character);

    switch (character){
        case 'a':
        case 'A':
        printf("Vowel");
        break;

        case 'e':
        case 'E':
        printf("Vowel");
        break;

        case 'i':
        case 'I':
        printf("Vowel");
        break;

        case 'o':
        case 'O':
        printf("Vowel");
        break;

        case 'u':
        case 'U':
        printf("Vowel");
        break;

        default :
        printf("Consonant");
        break;
    }
 
    return 0;
}