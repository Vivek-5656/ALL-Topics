//Write a program to print the address of a variable using a pointer.
#include <stdio.h>
int main() 
{
    int a;
    printf("Enter a:- ");
    scanf("%d",&a);
    int *ptr = &a;
    printf("Address of a is [ %p ]",&a);

    return 0;
}