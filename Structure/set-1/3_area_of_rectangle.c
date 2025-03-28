#include<stdio.h>
struct rectangle
{
    int length;
    int width;
};

int main(){
    struct rectangle dimension;
    printf("Enter Length:- ");
    scanf("%d",&dimension.length);
    printf("Enter Width:- ");
    scanf("%d",&dimension.width);
    int area = dimension.length * dimension.width;
    printf("Area of Rectangle is = [ %d ]",area);

    return 0;
}