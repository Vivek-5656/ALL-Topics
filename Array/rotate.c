#include<stdio.h>
int main(){
    int s;
    printf("Enter size:- ");
    scanf("%d",&s);
    int arr[s];
    printf("Enter Element:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<s;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0;i<2;i++){
        int a=arr[0];
        for(int i=0;i<s;i++)
        {
        arr[i]=arr[i+1];
        }
        arr[s-1]=a;
    }
    printf("\n");
    for(int i=0;i<s;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}