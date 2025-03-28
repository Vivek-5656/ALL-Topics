#include<stdio.h>
// Write a program to search an element in an array using pointers
void array(int *arr,int size,int find){
    int *ptr=arr;
    printf("Elements:- \n");
    for(int i=0;i<size;i++){
        printf("[%d],",ptr[i]);
    }
    printf("\nElement Finded:- ");
  
    for(int i=0;i<size;i++){
        if(find == ptr[i]){
            printf("Find [%d] in [%d] index",ptr[i],i);
        }
    }
}
int main(){
    int size,find;
    printf("Enter size of array:- ");
    scanf("%d",&size);
    printf("Enter find element:- ");
    scanf("%d",&find);
    int arr[size];
    printf("Enter Elements:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    array(arr,size,find);

    return 0;
}