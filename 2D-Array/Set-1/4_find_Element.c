#include<stdio.h>
int main(){

    int row,col,ind;
    printf("Enter Row:- ");
    scanf("%d",&row);
    printf("Enter Column:- ");
    scanf("%d",&col);
    printf("Enter Check Number:- ");
    scanf("%d",&ind);
    int arr[row][col];
    printf("Enter Elements:- \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // printf("Elements");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==ind){
                printf("Index is [%d,%d]",i,j);
            } 
        }
        printf("\n");
    }
    
    return 0;
}