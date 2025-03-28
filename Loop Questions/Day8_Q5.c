#include <stdio.h>

int main()
{
    // Write a program to take a number from a user and check if that number is prime or not.

    int num;
    printf("Enter a number :- ");
    scanf("%d", &num);
    int i = 1;

    int count = 0;

    for (; i <= num; i++)    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)    {
        printf("%d is Prime Number.", num);
    }
    else  {
        printf("%d is Not Prime Number.", num);
    }

    return 0;
}