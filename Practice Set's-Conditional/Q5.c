#include <stdio.h>

int main() {
    // 11. Find the largest of three numbers entered by the user.

    int num1;
    printf("Enter first number :- ");
    scanf("%d", &num1);

    int num2;
    printf("Enter second number :- ");
    scanf("%d", &num2);

    int num3;
    printf("Enter third number :- ");
    scanf("%d", &num3);

    if (num1 > num2){
        if (num1 > num3) {
            printf("%d is largest.", num1);
        }
        else {
            printf("%d is largest.", num3);
        }
    }
    else
    {
        if (num2 > num3){
            printf("%d is largest.", num2);
        }
        else{
            printf("%d is largest.", num3);
        }
    }

    return 0;
}