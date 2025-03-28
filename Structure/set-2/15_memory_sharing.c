// Demonstrate Memory Sharing in a Union
//  Create a union Data that holds an integer, float, and character. Assign values and observe the last stored value.
//  Example Input:
//  Structures and Unions in C
// int: 5, float: 4.2, char: 'A'
#include<stdio.h>
typedef union memory
{
    int a;
    float b;
    char c;
}location;

int main(){
    location ml;
    printf("Enter a:- ");
    scanf("%d",&ml.a);

    printf("Enter b:- ");
    scanf("%f",&ml.b);

    printf("Enter c:- ");
    scanf(" %c",&ml.c);

    printf("C = %c",ml.c);


    return 0;
}