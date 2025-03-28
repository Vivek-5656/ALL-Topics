#include<stdio.h>
// Check if a given number exists in an array.

int main(){
    int n;
    printf("Enter Index:- ");
    scanf("%d",&n);
    int exists[n];
    printf("Enter Elements:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&exists[i]);
    } 
    int check=0;
    for(int j=0;j<n;j++){
        if(exists[j] == 2){
            check=1;
        }
    }

    if(check==1){
        printf("Yes 2 is exists");
    } 
    else{
        printf("No! 2 is not exists");
    }

    return 0;
}