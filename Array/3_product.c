#include<stdio.h>

int main(){
    int n;
    printf("Enter size:- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p=1;
    for(int j=0;j<n;j++){
        p=p*arr[j];
    }
    printf("p= %d",p);
    return 0;
}