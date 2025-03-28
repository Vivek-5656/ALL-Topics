// Create a 1D Array Using calloc and Assign Values Automatically
// Write a program that dynamically allocates a 1D array using calloc, automatically
// assigns values to the array (e.g., squares of indices), and then displays the array.
// Input:- Enterthe number of elements: 3
#include<stdio.h>
#include<stdlib.h>
int main(){
    int s,power;
    printf("Enter size of array:- ");
    scanf("%d",&s);
    printf("Enter power:- ");
    scanf("%d",&power);
    int *square=(int*)calloc(s,sizeof(int));
    printf("Enter Element:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&*(square+i));
    }
    int str=1;
    for(int i=0;i<s;i++){
        for(int j=1;j<=power;j++){
            str=i*str;
            
        }
        printf("%d ",str);
        str=1;
    }


    return 0;
}