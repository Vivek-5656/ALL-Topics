#include<stdio.h>
int main(){
    int r=2,c=2;
    int trans[c][r];
    int arr[r][c];
    printf("Enter Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){
            trans[j][i]=arr[i][j];
            // printf("%d",arr[j][i]);
        }
        // printf("\n");
    }
    printf("Result----\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}