#include<stdio.h>
int main(){
    int size,temp;
    printf("Enter size:- ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Elements:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Result \n");
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(i==size-2){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}