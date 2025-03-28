#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row:- ");
    scanf("%d",&r);
    printf("Enter col:- ");
    scanf("%d",&c);
    
    int arr[r][c];
    printf("Enter Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int arr2[r][c];
    printf("Second----\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Result----\n");
    int arr3[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr3[i][j]=0;
           for(int k=0;k<2;k++){
             arr3[i][j]+=arr[i][k]*arr2[k][j];
            // printf("%d ",arr3[i][j]);
           }
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr3[i][j]);

        }
        printf("\n");
    }
    

    return 0;
}