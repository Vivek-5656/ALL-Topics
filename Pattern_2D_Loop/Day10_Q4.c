#include<stdio.h>

int main(){
// a
// ab
// abc
    char alpha;
    printf("Enter Ending alphabet :- ");
    scanf("%c",&alpha);

    char a;
    char b;

    for(a='a';a<=alpha;a++){
        for(b='a';b<=a;b++){
            printf("%c",b);
        }
        printf("\n");
    }

    return 0;
}