#include<stdio.h>
// ------------------------- Merge of 2 array ---------
int main()
{
    int n;
    printf("Enter first size of array:- ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter 1st array Element:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    int n2;
    printf("Enter second size of array:- ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter 2nd array Element:- \n");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

    // int n3=n+n2;
    int arr3[n+n2];
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
    }

    for(int i=0;i<n2;i++){
        arr3[n+i]=arr2[i];
    }

    for(int i=0;i<n+n2;i++){
        printf("%d ",arr3[i]);
    }

    
    return 0;
}