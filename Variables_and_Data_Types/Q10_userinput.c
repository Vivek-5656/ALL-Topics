#include<stdio.h>

int main(){
    // Take three userinput char type and print value.
    char a;
    printf("Enter first char :- ");
    scanf("%c",&a);

    char b;
    printf("Enter second char :- ");
    scanf(" %c",&b);

    char c;
    printf("Enter third char :- ");
    scanf(" %c",&c);

    printf("%c %c %c",a,b,c);
    
    return 0;
}