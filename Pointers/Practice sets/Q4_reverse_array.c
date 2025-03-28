// Write a program to reverse an array using pointers.
#include<stdio.h>
int main(){
    int s;
    printf("Enter size of arr:- ");
    scanf("%d",&s);
    int arr[s];
    printf("Enter Elements:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    printf("Reverse Elements:- \n");
    for(int i=s-1;i>=0;i--){
        printf("%d",*(ptr+i));
    }

    return 0;
}