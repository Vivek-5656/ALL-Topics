#include<stdio.h>
int main(){
    int r,k;
    printf("Enter size:- ");
    scanf("%d",&r);
    printf("Enter Sum:- ");
    scanf("%d",&k);
    int arr[r];
    printf("Enter Elements:- \n");
    for(int i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
            if(arr[i]+arr[j]==k){
                printf("Value of %d or %d Index sum is equals to %d\n",i,j,k);
            }
        }
    }

    return 0;
}