#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row:- ");
    scanf("%d",&r);
    printf("Enter Col:- ");
    scanf("%d",&c);
    int arr[r][c];
    int *ptr = &arr[0][0];
  
    printf("Enter Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("%d ",*(ptr+i*c+j));
        }
        printf("\n");
    }

    return 0;
}