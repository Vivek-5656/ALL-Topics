#include<stdio.h>

int main()
{
//. Write a program to create an Array and take input from the user and print the sum of even numbers and sum of odd numbers.
    int size;
    printf("Enter size of array:- ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter Elements:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sumEven=0;
    int sumOdd=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            sumEven+=arr[i];
        } else{
            sumOdd+=arr[i];
        }
    }
    printf("Sum of Even number = %d\n",sumEven);
    printf("Sum of Even number = %d",sumOdd);
    return 0;
}