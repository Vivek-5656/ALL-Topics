#include<stdio.h>

// Write a program to take a number from the user and return the factorial of the given number using a function.

    int fact();

    int main(){
        int factorial=fact();
        printf("Factorial is = %d",factorial);
    
    return 0;
    }

    int fact(){
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
        
    }
    return f;   
     

}
