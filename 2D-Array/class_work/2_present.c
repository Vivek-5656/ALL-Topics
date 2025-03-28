#include<stdio.h>
int main(){
    int r,c;
    printf("Enter r:- ");
    scanf("%d",&r);
    printf("Enter c:- ");
    scanf("%d",&c);
    int num;
    printf("Enter find element:- ");
    scanf("%d",&num);
    int count=0;
    int find[r][c];
    printf("Enter Element:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&find[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(find[i][j]==num){
                count++;
            }
        }
    }
    if(count>0){
        printf("%d is present %d times in this matrix",num,count);
    }  

    return 0;
}