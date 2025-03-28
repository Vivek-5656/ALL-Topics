#include<stdio.h>
// -------------------------------Print the marks of student marks is less than 35 using array.--------------------------
int main(){
    // int marks[5]={25,66,95,32,20};
    int n;
    printf("Enter the index Number:- ");
    scanf("%d",&n);

    int marks[n];
    printf("Enter Elements:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }

    for(int i=0;i<5;i++){    // -------------------i = Index Value.--------------------
        if(marks[i]<=35){
            printf("Marks:- %d\n",marks[i]);    //  ------------- Elements Value ------------
        } 
        
    }
    return 0;
}