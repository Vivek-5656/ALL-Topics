#include<stdio.h>
int main(){
// Find the largest element in an array using pointers.
    int s;
    printf("Enter size of array:- ");
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++){
        printf("Enter Num %d:- ",i+1);
        scanf("%d",&arr[i]);
    }
    int *ptr = arr;
    int max=0;
    for(int i=0;i<s;i++){
        if(max < *(ptr+i)){
            max = *(ptr+i);
        }
    }
    printf("Max:- %d",max);

    return 0;
}