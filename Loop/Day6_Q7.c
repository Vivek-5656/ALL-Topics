#include <stdio.h>

int main()
{
    // Write a program to take  a number from the user and Find an odd number from 1 to given numnber. (input num = 7) (output Odd number=3 5 7)

    int sp = 3;

    int num;
    printf("Enter ending number :- ");
    scanf("%d", &num);

    for (sp; sp <= num; sp += 2) {
        printf("%d\n", sp);
    }

    return 0;
}