#include<stdio.h>
void repeat(int r,int c,int arr[r][c]){
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           for(int k=0;k<r;k++){
            for(int l=i+1;l<c;l++){
                 if(arr[i][j]==arr[k][l]){
                count++;
                // temp=arr[i][j];
            }
            }
           }
        }
    }
    
        printf("Repeatating Element [%d]",count);
    
}
int main(){
    int r,c;
    printf("Enter Row:- ");
    scanf("%d",&r);l;l;l;l
    printf("Enter Col:- ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    repeat(r,c,arr);
    return 0;
}