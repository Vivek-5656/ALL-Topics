// Write a function that returns the largest element in an array using pointers.
#include<stdio.h>
void largest(int s,int arr,int *max){
    int *ptr = arr;
    *max = 0;
    printf("Elements:- \n");
    for(int i=0;i<s;i++){
        if(*(ptr+i)>*max){
            *max=*(ptr+i);
        }
    }
    printf("largest Value = %d",*max);
}
int main(){
    int s;
    printf("Enter size:- ");
    scanf("%d",&s);
    

    return 0;
}