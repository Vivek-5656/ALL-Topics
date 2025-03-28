#include<stdio.h>
int main(){

    int n,p=1;
    printf("Enter size:- ");
    scanf("%d",&n);
    int product[n];
    printf("Enter Elemen:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&product[i]);
    }

    for(int i=0;i<n;i++){
        p*=product[i];
    }
    printf("Product = %d",p);

    return 0;
}