// Use Typedef for Circle Area Calculation
// Define a Circle structure using typedef and calculate the area.
// Example Input:
// Radius: 7
#include<stdio.h>
typedef struct are
{
    float r;
    // float p;
}circle;

int main(){
    circle c;
    printf("Enter Radious:- ");
    scanf("%f",&c.r);
     
    float ans = 3.14159 * (c.r * c.r);
    printf("Area of Circle:- %.02f",ans);

    return 0;
}