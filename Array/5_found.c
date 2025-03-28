#include<stdio.h>

int main(){

    int arr[4];
    printf("Enter element:- \n");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    int n;
    printf("Enter another number:- ");
    scanf("%d",&n);
    int check=0;

    for(int j=0;j<4;j++){
        if(arr[j]==n){
            check=1;
        }  
    }

    if(check==1){
        printf("Found");
    } else{
        printf("Not Found");
    }

    return 0;
}