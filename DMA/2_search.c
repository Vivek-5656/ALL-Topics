#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter size of array:-");
    scanf("%d",&size);
    int *arr = (int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        scanf("%d",&*(arr+i));
    }
    int search;
    printf("Enter Search Element:- ");
    scanf("%d",&search);
    int find;
    int ind;
    for(int i=0;i<size;i++){
        if(*(arr+i)==search){
            find++;
            ind=i;
        }
    }
    (find > 0)? printf("%d Found in array at %d index(%d position).",search,ind,ind+1):printf("%d Not Found in array.",search);

    

    return 0;
}