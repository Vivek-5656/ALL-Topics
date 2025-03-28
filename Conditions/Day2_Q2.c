#include <stdio.h>

int main()
{
// Write a C program and check the number is positive, negative or Zero.
    int a;
    printf("Enter first num:-");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("a is negative.");
    }
    if (a > 0)
    {
        printf("a is positive");
    }
    if (a == 0)
    {
        printf("a is equal to 0.");
    }

    return 0;
}