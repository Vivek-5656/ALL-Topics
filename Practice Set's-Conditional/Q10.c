#include<stdio.h>

int main(){
// 21. Check whether a character is a vowel or consonant using a nested if-else.

    char alpha;
    printf("Enter alphabet :- ");
    scanf("%c",&alpha);

    if(alpha == 'a' || alpha == 'A'){
        printf(" %c is vowel",alpha);
    } else{
        if(alpha == 'e' || alpha == 'E'){
            printf(" %c is vowel.",alpha);
        } else{
            if(alpha == 'i' || alpha == 'I'){
                printf(" %c is vowel.",alpha);
            } else{
                if(alpha == 'o' || alpha == 'O'){
                    printf(" %c is vowel.",alpha);
                } else{
                    if(alpha == 'u' || alpha == 'U'){
                        printf(" %c is vowel.",alpha);
                    } else{
                        printf(" %c is consonant.",alpha);
                    }
                }
            }
        }
    }

    return 0;
}