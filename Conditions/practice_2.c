#include <stdio.h>
int main(){
// Write a program to input a character and check if it is an uppercase letter, lowercase letter, digit, or special character.

    char carc = 'A';
    char carc2 = carc-32;
    // printf("%c",carc2);

    if(carc == carc2){
        printf("carc is uppercase and its values is ");
    } else{
        printf("Nothing");
    }


    

    return 0;
}