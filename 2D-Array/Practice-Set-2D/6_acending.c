#include<stdio.h>
int main(){
    int r,c;
    printf("Enter Row:- ");
    scanf("%d",&r);
    printf("Enter Column:- ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int temp;
    printf("Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int a=0;a<r;a++){
                for(int b=i+1;b<c;b++){
                    if(arr[i][j]>arr[a][b]){
                        temp=arr[i][j];
                        arr[i][j]=arr[a][b];
                        arr[a][b]=temp;
                    }
                }
            }
        }
    }

    printf("Sorting\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}