#include<stdio.h>
// Write a function findMax that takes two integers as input and returns the larger number. Call this function from main() with different values.
void maxORmin(){
    int num;
    printf("Enter Number:- ");
    scanf("%d",&num);
    int max =0;
    int min=9;
    int rem;
    while (num!=0){
        rem=num%10;
        if(rem>max){
            max=rem;
        }
        if(rem<min){
            min=rem;
        }
        num/=10;
    }
    printf("Maximum Number = %d\nMinimum Number = %d\n",max,min);
             
}

int main(){
    maxORmin();
    maxORmin();
    return 0;
}