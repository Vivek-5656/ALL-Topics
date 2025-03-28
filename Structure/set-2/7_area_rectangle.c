// Calculate the Area of a Rectangle Using a Pointer
// Define a Rectangle structure with fields for length and width. Use a pointer to store values and compute the area.
#include<stdio.h>
#include<string.h>
struct area
{
    int length;
    int width;
    int result;
};

int main()
{
    struct area rtt;
    printf("Enter Length:- ");
    scanf("%d",&rtt.length);
    printf("Enter Width:- ");
    scanf("%d",&rtt.width);
    rtt.result = rtt.length * rtt.width;
    struct area *ptr;
    ptr=&rtt;
    printf("Area = %d",ptr->result);

    return 0;
}