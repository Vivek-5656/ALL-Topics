#include<stdio.h>

int main(){
// Write a program to print alphabets from Z to A.
    char alpha;
    printf("Enter alpha :- ");
    scanf("%c",&alpha);

    for( ; alpha >= 'A';alpha--){
        printf(" %c ",alpha);
    }

    return 0;
}