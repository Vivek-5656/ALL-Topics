#include <stdio.h>

int main()
{

    char word;
    printf("Enter your need:- ");
    scanf("%c", &word);

    if (word >= '0' && word <= '9'){
        printf("Digit");
    }
    else if (word >= 'a' && word <= 'z' || word >= 'A' && word <= 'Z')
    {
        printf("Alphabet");
    }
    else
    {
        printf("Special character");
    }

    return 0;
}