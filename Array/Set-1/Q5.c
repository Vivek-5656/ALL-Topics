#include<stdio.h>
int main(){
// WAP to take input from users in an array and display them in reverse order?
    int n;
    printf("Enter index number:- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 

    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

    return 0;

}