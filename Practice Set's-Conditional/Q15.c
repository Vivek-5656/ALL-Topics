#include<stdio.h>

int main(){
//  Check if a point lies on the X-axis, Y-axis, or origin.

    int x;
    printf("Enter X-Axis :- ");
    scanf("%d",&x);

    int y;
    printf("Enter Y-Axis :- ");
    scanf("%d",&y);

    if(x==0 && y==0){
        printf("The point is at the origin.");
    } else{
        if(x==0 && y!=0){
            printf("The point is on the Y-axis.");
        } else{
            if(y==0 && x!=0){
                printf("The point is on the X-axis.");
            }
        }
    }

    return 0;
}