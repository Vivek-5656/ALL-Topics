#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row:- ");
    scanf("%d",&r);
    printf("Enter col:- ");
    scanf("%d",&c);
    int sum=0;
    int arr[r][c];
    printf("Enter Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    printf("Elemtns Are:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        printf("\n");
    }
    printf("Sum is %d",sum);

    return 0;
}