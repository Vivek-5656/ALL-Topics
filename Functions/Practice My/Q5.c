#include<stdio.h>
//8. Function Overloading Simulation
//Although C doesn't support function overloading, simulate it by creating two functions named alculateArea:
// One to calculate the area of a rectangle (length and width as parameters).
// Another to calculate the area of a circle (radius as a parameter).

int rectangleArea(int l,int w){
    int rectangle = l*w;
    return rectangle;
}


float circleArea(float r){
   
    float circle = 3.14 * r*r;
    return circle;
}

int main(){

    int length,width;
    printf("Enter length :- ");
    scanf("%d",&length);
    printf("Enter width :- ");
    scanf("%d",&width);

    int areaOfRectangle = rectangleArea(length,width);
    printf("Area of Rectangle = %d\n",areaOfRectangle);

    float radious;
    printf("Enter Radious :- ");
    scanf("%f",&radious);

    float areaOfCircle = circleArea(radious);
    printf("Area of Circle = %f",areaOfCircle);

    return 0;
}