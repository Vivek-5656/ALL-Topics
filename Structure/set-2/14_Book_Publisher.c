// Store Book Publisher Details Using a Nested Structure
// Define a Book structure with Publisher as a nested structure (name, year). Display book details.
//  Example Input:
//  Title: C Programming, Publisher: McGraw, 2020
#include<stdio.h>
#include<string.h>
struct publisher
{
    char name[20];
    int year;
    
};

struct book
{
    char bookName[30];
    struct publisher bd;
};

int main(){
    struct book det;
    printf("Enter Book Name:- ");
    fgets(det.bookName,sizeof(det.bookName),stdin);
    printf("Enter Publisher:- ");
    fgets(det.bd.name,sizeof(det.bd.name),stdin);
    printf("Enter Year:- ");
    scanf("%d",&det.bd.year);

    printf("Title:- %sPublisher:- %sYear:- %d",det.bookName,det.bd.name,det.bd.year);

    return 0;
}