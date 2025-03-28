#include<stdio.h>
void array(int *arr,int size){
    printf("Elements:- \n");
    for(int i=0;i<size;i++){
        printf("[%d],",*(arr+i));
    }
}
int main(){
    int size;
    printf("Enter size of array:- ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Elements:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    array(arr,size);

    return 0;
}