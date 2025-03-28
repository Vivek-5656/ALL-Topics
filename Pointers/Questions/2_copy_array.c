#include<stdio.h>
int main(){
    int s;
    printf("Enter size of array:- ");
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++){
        printf("Enter Element %d:- ",i+1);
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    int brr[s];
    int *btr=brr;
    for(int i=0;i<s;i++){
        *(btr+i)=*(ptr+i);
    }
    printf("Btr Copied---\n");
    for(int i=0;i<s;i++){
        printf("%d ",*(btr+i));
    }

    return 0;
}