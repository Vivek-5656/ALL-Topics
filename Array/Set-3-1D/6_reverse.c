#include<stdio.h>
int main(){
    int size;
    printf("Enter size:- ");
    scanf("%d",&size);
    int reverse[size];
    printf("Enter Element:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&reverse[i]);
    } 
    for(int i=size-1;i>=0;i--){
        printf("%d ",reverse[i]);
    }
    return 0;
}