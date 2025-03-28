#include<stdio.h>
void equalOrNot(int r,int c,int arr1[r][c],int arr2[r][c]){
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr1[i][j]==arr2[i][j]){
                count++;
            }
        }
    }
    if(count==r*c){
        printf("Both are Equal");
    } else{
        printf("Both are Not Equal");
    }

}

int main(){
    int r,c;
    printf("Enter Row:- ");
    scanf("%d",&r);
    printf("Enter Col:- ");
    scanf("%d",&c);
    int arr1[r][c];
    int arr2[r][c];
    printf("Enter First Array Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter Second Array Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    equalOrNot(r,c,arr1,arr2);
    
return 0;
}