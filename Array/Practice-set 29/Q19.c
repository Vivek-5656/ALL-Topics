#include<stdio.h>
int main(){
    int s,k;
    printf("Enter Size:- ");
    scanf("%d",&s);
    printf("Enter Position:- ");
    scanf("%d",&k);
    int arr[s];
    printf("Enter Elements:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=k-1;i<s;i++){
        arr[i]=arr[i+1];
    }
    printf("After Deletion:- \n");
    for(int i=0;i<s-1;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}