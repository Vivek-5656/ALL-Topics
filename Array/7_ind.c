#include<stdio.h>
int main(){
    int arr[5];
    printf("enter Element:- \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    int index;
    printf("Enter index :- ");
    scanf("%d",&index);

    for(int i=0;i<5;i++){
        if(i==index){
            printf("%d",arr[i]);
        }
    }

    return 0;
}