#include <stdio.h>
int main()
{
// : Count how many vowels (a, e, i, o, u) are present in a given string.

    int size = 100;
    char str[size];
    printf("Enter Words:- \n");
    fgets(str, sizeof(str), stdin);
    printf("%s", str);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {

            count++;
        }
    }
    printf("Number of Vowels:- %d", count);

    return 0;
}