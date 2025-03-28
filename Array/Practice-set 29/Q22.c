#include<stdio.h>
int main(){
    int r,c=0;
    printf("Enter size:- ");
    scanf("%d",&r);
    int arr[r];

    printf("Enter Elements:- \n");
    for(int i=0;i<r;i++){
        scanf("%d",&arr[i]);
    } 
    int temp=0;
    for(int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
            if(arr[i]==arr[j+1]){
                c++;
                temp=arr[i];
            }
        }
        

    }
    if(c>1){
            printf("%d is repeadted %d times ",temp,c);
        }
    // printf("c=%d",c);

    return 0;
}