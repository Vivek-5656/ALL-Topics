#include<stdio.h>

int main(){
// abc
// ab
// a
    char alpha;
    printf("Enter last alphabet :- ");
    scanf("%c",&alpha);

    char f;
    char s;
    for(f='a';alpha>=f;alpha--){
        for(s='a';s<=alpha;s++){
            printf("%c ",s);
        }
        printf("\n");
    }

   
    return 0;
}