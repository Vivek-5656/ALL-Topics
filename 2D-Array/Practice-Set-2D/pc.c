#include<stdio.h>
int main(){
    int r,c,store,count=0;
    printf("Enter row:- ");
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
    printf("\nElements:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // int si=r*c;
    // int arr2[si];
    for(int i=0;i<r*c;i++){
        for(int j=i+1;j<r*c;j++){
            if(arr[i]==arr[j]){
                store=arr[i];
                count++;
            }
        }
    }
    printf("\nRepeating Element [%d] [%d] Times",store,count);

    return 0;
}