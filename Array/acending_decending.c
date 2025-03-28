#include<stdio.h>
// Sort an array in ascending and descending order using a basic sorting algorithm.
int main(){
    int n,temp;
    printf("Enter size:- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements:- \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    printf("-------Acending Order --------\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int k=i+1;k<n;k++)
        {
            if(arr[k]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
            }
        }
    }
    printf("\n-------------Decending Order-------\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}