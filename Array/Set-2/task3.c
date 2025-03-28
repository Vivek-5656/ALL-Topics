#include<stdio.h>
int main(){
    // Sorting
    int n;
    printf("Enter size:- ");
    scanf("%d",&n);
    int sorting[n];
    printf("Enter Element:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&sorting[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(sorting[i] > sorting[j]){
                sorting[i]=sorting[i]+sorting[j];
                sorting[j]=sorting[i]-sorting[j];
                sorting[i]=sorting[i]-sorting[j];
                printf("%d ",sorting[i]);
            }
        }
    }

    return 0;
}