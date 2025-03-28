#include<stdio.h>
void presentNumber(int arr[][2],int rowsize,int colsize,int num)
{
    int c=0;
    printf("--------Elements--------\n");
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            if(arr[i][j]==num){
                c++;
            }
        }
    }
    if(c>0){
        printf("%d is present in Array",num);
    } else{
        printf("%d is not present in Array",num);
    }
}

int main(){

    int row,col,num;
    printf("Enter row:- ");
    scanf("%d",&row);
    printf("Enter Col:- ");
    scanf("%d",&col);
    printf("Enter num:- ");
    scanf("%d",&num);
    int arr[row][col];
    printf("Enter Elements:- \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    presentNumber(arr,row,col,num);

    return 0;
}