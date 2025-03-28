#include<stdio.h>
int main(){
    int row,col;
    printf("Enter Row:- ");
    scanf("%d",&row);
    printf("Enter col:- ");
    scanf("%d",&col);
    int arr[row][col];
    printf("Enter Elements:- \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter Output:- \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}