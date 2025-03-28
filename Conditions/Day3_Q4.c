#include<stdio.h>

int main(){

    char word;
    printf("Enter your character:- ");
    scanf("%c",&word);

    if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u'){
        printf("vowel");
    }
    else if(word == 'A' || word == 'E' || word == 'I' || word == 'O' || word == 'U'){
        printf("its also vowel");
    }
     else{
        printf("consonant");
    }

    return 0;
}