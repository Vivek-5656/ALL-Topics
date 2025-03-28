#include<stdio.h>
//  WAP to take input in an array using input function and print element using output function ?
void input(int arr[],int size){
    
    printf("Enter elements:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}

void output(int arr[],int size){
   printf("Elements:- ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int size;
    printf("Enter size of array:- ");
    scanf("%d",&size);
    int arr[size];

    input(arr,size);
    output(arr,size);
    return 0;
}