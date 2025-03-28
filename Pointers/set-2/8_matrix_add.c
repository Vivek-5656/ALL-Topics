#include<stdio.h>
int main(){
    int r,c;
    printf("Enter Row:- ");
    scanf("%d",&r);
    printf("Enter Col:- ");
    scanf("%d",&c);

    int arr[r][c];
    int arr2[r][c];
    int *ptr = &arr[0][0];
    int *ptr2 = &arr2[0][0];

    printf("Enter Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   
    printf("Enter 2nd Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Elements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",*(ptr+i*c+j));
        }
        printf("\n");
    }
    printf("Elements 2:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",*(ptr2+i*c+j));
        }
        printf("\n");
    }

    int arr3[r][c];
    int *ptr3=&arr3[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        *(ptr3+i*c+j)=*(ptr+i*c+j)+*(ptr2+i*c+j);
        }
        
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("%d ",*(ptr3+i*c+j));
        }
        printf("\n");
    }

    return 0;
}