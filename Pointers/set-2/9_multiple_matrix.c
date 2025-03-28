#include<stdio.h>
int main(){
    int arr[2][2];
    int brr[2][2];
    printf("Enter arr Elements:- \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter brr Elements:- \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    printf("Elements:- \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Elements:- \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    int crr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr[i][j]*brr[j][i];
            crr[i][j] =  arr[i][j]*brr[j][i] + arr[i][j+1] * brr[j+1][i];

        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}