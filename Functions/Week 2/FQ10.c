#include <stdio.h>
// Write a program to take two numbers from the user and print the prime number present between them.

void primeNumberTwo() {
    int num1, num2;
    printf("Enter First Number :- ");
    scanf("%d", &num1);
    printf("Enter Second Number :- ");
    scanf("%d", &num2);
    int c;

    for (num1 = num1 + 1; num1 < num2; num1++){
        c = 0;
        for (int i = 1; i <= num1; i++) {
            if (num1 % i == 0) {
                c++;
            }
        }
        if (c == 2) {
            printf("%d\n", num1);
        }
    }
}

int main(){

    primeNumberTwo();

    return 0;
}
