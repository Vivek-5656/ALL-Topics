#include <stdio.h>

int main()
{

    int a;
    printf("Enter first number:- ");
    scanf("%d", &a);

    int b;
    printf("Enter second number:- ");
    scanf("%d", &b);

    int c;
    printf("Enter third number:- ");
    scanf("%d", &c);

    int d;
    printf("Enter fourth number:- ");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is max");
        }
        else
        {
            printf("C is max");
        }
    }
    else
    {
        if (b > c)
        {
            printf("B is max");
        }
        else
        {
            if (c < d)
            {
                printf("d is max");
            }
            else
            {
                printf("c is max");
            }
        }
    }
    return 0;
}