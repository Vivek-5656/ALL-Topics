#include <stdio.h>
#include <string.h>
// . .Write a program to count the total number of vowels or consonants in a string.

int main()
{
    char str[100];
    printf("Enter String:- \n");
    fgets(str, sizeof(str), stdin);
    printf("%s", str);
    int count = 0;
    int countConst=0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
            count++;
        } else{
            countConst++;
        }
    }
    printf("Number Of Vowel = %d\n",count);
    printf("Number Of Consonant = %d",countConst-1);

    return 0;
}