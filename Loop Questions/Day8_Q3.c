#include <stdio.h>

int main(){
// Write a program to take a number from a user and find last digit and first digit of that number.
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);

    int lastNum = num % 10;
    printf("last number is %d\n",lastNum);

    while (num >= 10)    {
        //  printf("%d",num);
        
            num=num/10;

       
    }
    printf("First number is %d",num);
     
    return 0;

}