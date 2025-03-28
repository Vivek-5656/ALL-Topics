#include<stdio.h>
void reverseArray(int *arr,int size){
    printf("Elements\n");
    for(int i=0;i<size;i++){
        printf("[%d] ",*(arr+i));
    }
    printf("\nAfter Reversed \n");
    for(int i=size-1;i>=0;i--){
        printf("[%d] ",*(arr+i));
    }
}
int main(){
    int size;
    printf("Enter the size of array:- ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the Elements:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    reverseArray(arr,size);

    return 0;
}