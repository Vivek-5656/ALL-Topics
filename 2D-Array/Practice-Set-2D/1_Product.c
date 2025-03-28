#include<stdio.h>
int product(int r,int c,int arr[r][c]){
    int p=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            p*=arr[i][j];
        }
    }
    return p;
}
int main(){
    int r,c,p=1;
    printf("Enter Row:- ");
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
    int result= product(r,c,arr);
    printf("Product is = %d",result); 
    return 0;
}