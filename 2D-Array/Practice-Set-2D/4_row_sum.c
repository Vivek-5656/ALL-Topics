#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row:- ");
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
     printf("Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        printf("Sum Of Row:- [%d]\n",sum);
    }

    for(int i=0;i<c;i++){
        int sum=0;
        for(int j=0;j<r;j++){
            sum+=arr[j][i];
        }
        printf("Sum Of Column:- [%d]\n",sum);
    }

    return 0;
}