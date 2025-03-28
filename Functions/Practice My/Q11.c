#include<stdio.h>
//Write a function printChar that takes a character and an integer n as input and prints the character n times. Call it from main() with different inputs.

void character(char c){
    char a;
    for(int i=1;i<=5;i++){
         a = c;
        printf("Character = %c\n",a);
    }
    
}

int main(){
    char ch;
    printf("Enter Character :- ");
    scanf(" %c",&ch);
    character(ch);
    return 0;
}