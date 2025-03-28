#include<stdio.h>

int main(){
    int arr[5];
    printf("Enter elements:- \n");

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    } 
    
    for(int j=5-1;j>=0;j--){
        printf("%d",arr[j]);
    }

    return 0;
}

