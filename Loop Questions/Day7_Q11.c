#include<stdio.h>

int main(){
// Write a program to take two numbers from the user and print the count of numbers present between them.

    
      int n1;
    printf("Enter n1 :- ");
    scanf("%d",&n1);
    
    int n2;
    printf("Enter n2 :- ");
    scanf("%d",&n2);
    
    int c=0;
    
    for(int i =n1+1;i<n2;i++){
        c++;
    }
    printf("c is %d",c);


    return 0;
}