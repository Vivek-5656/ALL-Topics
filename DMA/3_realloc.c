#include<stdio.h>
#include<stdlib.h>
int main(){
    int s;
    printf("Enter Size of array:- ");
    scanf("%d",&s);
    int *ptr=(int*)calloc(s,sizeof(int));
    for(int i=0;i<s;i++){
        scanf("%d",&*(ptr+i));
    }
    for(int i=0;i<s;i++){
        printf("%d ",*(ptr+i));
    }
    ptr=realloc(ptr,10);
    for(int i=0;i<10;i++){
        scanf("\n%d",&*(ptr+i));
    }
    free(ptr);

    return 0;
}