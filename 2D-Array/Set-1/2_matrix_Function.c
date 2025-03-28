#include<stdio.h>
void arr2D(int arr[][2],int row,int col)
{
    // int row,col;
   
    printf("Enter Output:- \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
// Doubt 6 3 2
//       2 3 6  
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
    arr2D(arr,row,col);

    return 0;
}