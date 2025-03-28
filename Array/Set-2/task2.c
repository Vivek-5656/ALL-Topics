#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array:- ");
    scanf("%d",&n);
    int search[n];
    printf("Enter Elements:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&search[i]);
    } 
    int s;
    printf("Enter Searching Element:- ");
    scanf("%d",&s);

    for(int i=0;i<n;i++){
        if(search[i]==s){
            printf("%d Found \n",search[i]);
            break;
        } else{
            printf("Not Found\n");
        }
        
    }

    return 0;
}