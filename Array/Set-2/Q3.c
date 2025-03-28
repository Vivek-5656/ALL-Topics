#include<stdio.h>
int main()
{
    int arr[5]={2,5,6,3,8};
    int c=0;
    int eve[c];

    int c2=0;
    int odd[c2];
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            eve[c]=arr[i];
            c++;
        } else{
            odd[c2]=arr[i];
            c2++;
        }
    }
    printf("Even \n");
    for(int i=0;i<c;i++){
        printf("%d \n",eve[i]);
    }
    printf("Odd \n");
    for(int i=0;i<c2;i++){
        printf("%d ",odd[i]);
    }
    return 0;
}