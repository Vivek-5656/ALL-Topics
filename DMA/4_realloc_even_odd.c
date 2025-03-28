#include<stdio.h>
#include<stdlib.h>
int main(){
    int s;
    printf("Enter s:- ");
    scanf("%d",&s);
    int *arr=(int*)calloc(s,sizeof(int));
    for(int i=0;i<s;i++){
        *(arr+i)=i*2+1;
    }
    for(int i=0;i<s;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");

    int s2;
    printf("\nEnter new size:- ");
    scanf("%d",&s2);
    arr = (int*)realloc(arr,s2*sizeof(int));
    int a=1;
    for(int i=s;i<s2;i++){
        *(arr+i)=2*a;
        a++;
    }
    for(int i=0;i<s2;i++){
        printf("%d ",*(arr+i));
    }

    free(arr);
    return 0;
}