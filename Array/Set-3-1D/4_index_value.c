#include<stdio.h>
int main(){
    int n;
    printf("Enter size:- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Element:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    int index_num;
    printf("Enter index value:- ");
    scanf("%d",&index_num);
    printf("%d ",arr[index_num]);
    
    return 0;
}