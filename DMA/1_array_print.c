#include<stdio.h>
#include<stdlib.h>
int main(){
    int s;
    printf("Enter Size of array:- ");
    scanf("%d",&s);
    int *arr = (int*)malloc(s*sizeof(int));
    for(int i=0;i<s;i++){
        scanf("%d",&*(arr+i));
    }
    int sum=0;
    for(int i=0;i<s;i++){
        printf("%d ",*(arr+i));
        sum+=*(arr+i);
    }
    printf("\nSum = %d",sum);

    return 0;
}