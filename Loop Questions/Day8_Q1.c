#include<stdio.h>

int main(){
// Write a program to take user input and check whether the number is perfect or not.

    int num;
    printf("Enter a numner :- ");
    scanf("%d",&num);

    int sum = 0;

    for(int i=1;i<num;i++){
        if(num%i==0){
            printf("%d\n",i);
            sum=sum+i;
            
            
        } 
    }
    printf("Sum is %d\n",sum);
    if(sum==num){
                printf("%d is perfect number.\n",num);
            }  

    return 0;
}