#include<stdio.h>
 
 
void add(int *num1,int *num2){
    int sum = *num1 + *num2;
    printf("Sum is = %d",sum);
    
}
int main(){
    int num1,num2;
    printf("Enter num1:- ");
    scanf("%d",&num1);
    printf("Enter num2:- ");
    scanf("%d",&num2);
    add(&num1,&num2);
    
    return 0;
}