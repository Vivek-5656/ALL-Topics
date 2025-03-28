#include<stdio.h>
void max_min(int r,int c,int arr[r][c]){
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    printf("Max is [ %d ]\n",max);
    printf("Min is [ %d ]",min);
}
int main(){
    int r,c;
    printf("Enter r:- ");
    scanf("%d",&r);
    printf("Enter c:- ");
    scanf("%d",&c);
    int a1[r][c];
    printf("Elements= \n");
    // int m=a1[0][0],min=a1[0][0];
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    max_min(r,c,a1);
    
    return 0;
}