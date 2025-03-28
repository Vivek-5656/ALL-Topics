#include<stdio.h>
int main(){
    int size;
    printf("Enter size:- ");
    scanf("%d",&size);
    int multi=1;
    int arr[size];
    printf("Enter Elements:- \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    } 
    printf("Result:- \n");
    for(int i=0;i<size;i++){
        multi*=arr[i];
    }
    printf("Multiple is = %d",multi);
    
    return 0;
}