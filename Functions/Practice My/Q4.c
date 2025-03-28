#include<stdio.h>
//Create a function swap that swaps the values of two variables. Demonstrate the use of this function by printing the variables before and after swapping.

void swapNumber(int n1, int n2){
    int n3;
    n3 = n1+n2;
    n1 = n3-n1;
    n2 = n3-n1;
    printf("n1 = %d\nn2 = %d",n1,n2);
}

int main(){
    int num1,num2;
    printf("Enter first Number :- ");
    scanf("%d",&num1);
    printf("Enter Second Number :- ");
    scanf("%d",&num2);
    swapNumber(num1,num2);
    return 0;
}