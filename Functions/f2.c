#include<stdio.h>

float multi(float a, float b);

// Return Type
// Take something and return something.

int main(){
    float x ;
    printf("Enter first number :- ");
    scanf("%f",&x);
    float y ;
    printf("Enter second number :- ");
    scanf("%f",&y);
    float ans = multi(x,y);
    printf("Multiple is %f",ans);
    return 0;

}

float multi(float a, float b){
    float c = a * b;
    return c;
}

