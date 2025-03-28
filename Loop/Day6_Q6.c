#include<stdio.h>

int main(){
// Write a program to take a number from the user and Find an even number from 1 to a given number. (input num = 7) (output Even number=2 4 6)

    int sp = 2;

    int num;
    printf("Enter Ending number :- ");
    scanf("%d",&num);
 

    while (sp<=num) {
        printf("%d\n",sp);
        sp+=2;

    }
    
    

    return 0;
}