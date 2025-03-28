#include<stdio.h>
int maxNum(int *n1,int *n2){
    int s = (*n1 > *n2)? *n1:*n2;
    return s;
}
int main(){
    int n1,n2;
    printf("Enter first num:- ");
    scanf("%d",&n1);
    printf("Enter second num:- ");
    scanf("%d",&n2);
    int result = maxNum(&n1,&n2);
    printf("The Maximum number is :- %d",result);

    return 0;
}