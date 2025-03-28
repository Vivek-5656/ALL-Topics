#include<stdio.h>
#include<string.h>
typedef struct rectangle
{
    int length;
    int width;
}area;
area input(){
    area ar;
    printf("Enter Length:- ");
    scanf("%d",&ar.length);
    printf("Enter Width:- ");
    scanf("%d",&ar.width);

    return ar;
}
void output(area ar){
    int result = ar.length * ar.width;
    printf("Area of Rectangle:- %d\n",result);
}

int main(){
    area ar1 = input();
    output(ar1);
    area ar2 = input();
    output(ar2);

    return 0;
}