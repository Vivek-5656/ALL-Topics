#include<stdio.h>

int main(){
    int arr[4];
    printf("Enter elements:- \n");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<4;i++){
        // printf("%d ",arr[i]);
        sum=sum+arr[i];

    }
    printf("sum = %d",sum);

}