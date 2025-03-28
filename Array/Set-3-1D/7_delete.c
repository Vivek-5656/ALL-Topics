#include<stdio.h>
int main(){
    int n,position;
    printf("Enter size:- ");
    scanf("%d",&n);
    printf("Enter position of deleteion:- ");
    scanf("%d",&position);
    int arr[n];
    printf("Enter Elements:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    printf("Array is \n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
   
    for(int i=position-1;i<n;i++)
    {
        arr[i]=arr[i+1];    
    }
    printf("\nAfter deleteion ");
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}