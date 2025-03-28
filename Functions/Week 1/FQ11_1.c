#include<stdio.h>
 
int qt(){
    int n1,n2;
    printf("Enter dividend :- ");
    scanf("%d",&n1);
    printf("Enter Divider :- ");
    scanf("%d",&n2);
    int quotient = n1 / n2;
    return quotient;
}

int main(){
    int result = qt();
    printf("result = %d",result);
    return 0;
}

