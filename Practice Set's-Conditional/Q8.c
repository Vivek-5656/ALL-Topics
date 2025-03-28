#include<stdio.h>

int main(){
// 19. Determine if a given year is a century year or not.

    int year;
    printf("Enter year :- ");
    scanf("%d",&year);

    if(year%100==0){
        printf("%d is Century Year.",year);
    } else{
        printf("%d is not Century Year.",year);
    }

    return 0;
}