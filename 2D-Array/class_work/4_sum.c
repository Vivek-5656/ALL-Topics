#include<stdio.h>
int sumOfArray(int r,int c,int arr[r][c])
{
    int sum=0;
    // printf("Sum Of Elements:---\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    return sum;
}
int main(){
    int r,c;
    printf("Enter Row");
    scanf("%d",&r);
    printf("Enter Col:- ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sumis = sumOfArray(r,c,arr);
    printf("Sum is:- %d",sumis);
    
    return 0;
}