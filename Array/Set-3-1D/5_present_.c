#include<stdio.h>
int main(){
    int n;
    printf("Enter size:- ");
    scanf("%d",&n);
    int present[n];
    printf("Enter Element:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&present[i]);
    }

    int found;
    printf("Enter search num:- ");
    scanf("%d",&found);
    int c=0;
    for(int i=0;i<n;i++){
        if(present[i]==found){
            c++;
        } 
    }
    if(c>0){
        printf("Found");
    } else{
        printf("Not Found");
    }

    return 0;
}