// Use Typedef for a Movie Database
// Store and display a movieʼs title, director, and year using Example Input:
// Inception, Christopher Nolan, 2010
#include<stdio.h>
#include<string.h>
typedef struct movie
{
    char movie_name[100];
    char director[100];
    int released;
}database;

int main(){
    database mv;
    printf("Enter Movie Name:- ");
    scanf("%s",&mv.movie_name);

    printf("Enter Director:- ");
    scanf("%s",&mv.director);

    printf("Enter Released Date:- ");
    scanf("%d",&mv.released);

    printf("Movie:- %s Director:- %s Released:- %d",mv.movie_name,mv.director,mv.released);

    return 0;
}