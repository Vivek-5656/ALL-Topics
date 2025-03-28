#include<stdio.h>
int main(){
    int s,min;
    printf("Enter size:- ");
    scanf("%d",&s);
    int arr[s];
    printf("Enter Elements:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(arr[j]>arr[i]){
                min=arr[i];
                arr[i]=arr[j];
                arr[j]=min;
            }
        }
    }
    for(int i=0;i<s;i++){
        if(i==s-2){
            printf("2nd min is = %d",arr[i]);
        }
    }

    return 0;
}