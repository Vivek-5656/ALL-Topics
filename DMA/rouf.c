#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,c;
    printf("Enter row:- ");
    scanf("%d",&r);
    printf("Enter col:- ");
    scanf("%d",&c);
    int **arr=(int**)calloc(r,sizeof(int));
    for(int i=0;i<r;i++){
        arr[i]=(int*)calloc(c,sizeof(int));
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    free(arr);

    return 0;
}