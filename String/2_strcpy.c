#include <stdio.h>
#include <string.h>
// Copies Value of old String to new string
int main()
{
    char oldstr[100];
    printf("Enter Old String:- ");
    fgets(oldstr, sizeof(oldstr), stdin);
    char newstr[100];
    printf("Enter new String:- ");
    fgets(newstr, sizeof(newstr), stdin);
    strcpy(newstr, oldstr);
    printf("After Copied String in newstr :- ");
    puts(newstr);

    return 0;
}