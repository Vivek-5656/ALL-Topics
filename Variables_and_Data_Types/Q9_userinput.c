#include <stdio.h>

int main()
{
    // Take two userinput and sum that value.
    int a;
    printf("Enter first num:- ");
    scanf("%d", &a);

    int b;
    printf("Enter second num:- ");
    scanf("%d", &b);

    int total = a + b;
    printf("Total num is %d", total);

    return 0;
}