#include<stdio.h>

int main(){
// Unary Operator (Post Increament,Pre Increament)
    int num1;
    printf("Enter num1:- ");
    scanf("%d",&num1);

    num1++; //Post Increament
    printf("post %d \n",num1);

    ++num1;   // Pre Increament
    printf("Pre %d",num1);

    return 0;
}