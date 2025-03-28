// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    printf("Enter your number:- ");
    scanf("%d",&a);
    
    if(a > 0){
        printf("a is positive.");
    }
    else{
        if(a<0){
            printf("a is negative number.");
        } else{
            printf("a is Zero");
        }
    }

    return 0;
}