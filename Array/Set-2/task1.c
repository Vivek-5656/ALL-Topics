#include<stdio.h>

int main(){
    int n;
    printf("Enter size of array:- ");
    scanf("%d",&n);
    int traverse[n];
    printf("Enter Elements:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&traverse[i]);
    } 
    for(int i=0;i<n;i++){
        printf("%d ",traverse[i]);
    }
    return 0;
}