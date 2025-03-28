#include<stdio.h>
int main(){
    int s=5;
    int arr[s];
    printf("Enter Elements:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    printf("Even Numbers:- \n");
    for(int i=0;i<s;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}