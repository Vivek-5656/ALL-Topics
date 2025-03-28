 
#include <stdio.h>
#include <string.h>
typedef struct library
{
    char title[100];
    char author[100];
    int price;
} book;

int main()
{
    int s;
    printf("Enter s:- ");
    scanf("%d", &s);
    book lbr[s];
    for (int i = 0; i < s; i++)
    {
        printf("-----Enter First %d------\n", i + 1);
        printf("Enter Title:- ");
        scanf("%s", lbr[i].title);
        printf("Enter Author:- ");
        scanf("%s", lbr[i].author);
        printf("Enter Price:- ");
        scanf("%d", &lbr[i].price);
    }
    char search[100];
    printf("Enter search:- ");
    scanf("%s",search);
    for (int i = 0; i < s; i++)
    {
        if (strcmp(lbr[i].author,search)== 0)
        {
            printf("Title:- %s, Author:- %s, Price:- %d\n", lbr[i].title, lbr[i].author, lbr[i].price);
        }
    }

    return 0;
}