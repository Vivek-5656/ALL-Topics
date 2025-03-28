#include<stdio.h>
int main(){
    int size=4;
    int k;
    printf("Enter Position:- ");
    scanf("%d",&k);
    int arr[size];
    printf("Enter Elements:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Result  \n");
    for(int i=0;i<size;i++){
        if(i==k-1){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}