#include<stdio.h>
int main(){
    int s1,s2;
    printf("Enter First size of array:- ");
    scanf("%d",&s1);
    printf("Enter second size of array:- ");
    scanf("%d",&s2);
    int temp;
    int arr[s1][s2];
    printf("Enter Elements:- \n");
    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Elements:- \n");

    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("After changing Elements:- \n");

    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            temp=arr[i][j];
            arr[j][i]=temp;
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}