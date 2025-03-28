#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter r1:- ");
    scanf("%d",&r1);
    printf("Enter c1:- ");
    scanf("%d",&c1);
    
    int arr[r1][c1];
    int arr2[r1][c1];
    printf("Enter First array Element \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter Second array Element \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    
   
    int arr3[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            arr3[i][j]=arr[i][j]+arr2[i][j];
             
        }
        printf("\n");
    }    
     printf("Third array after addition :- \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",arr3[i][j]);             
        }
        printf("\n");
    }     
    

    return 0;
}