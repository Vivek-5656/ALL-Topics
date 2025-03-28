#include<stdio.h>
#include<string.h>
typedef struct product_manage
{
    char name[100];
    int id;
    int qnt;
}product;

int main(){
    product pd[3];
    for(int i=0;i<3;i++){
        printf("----- Enter %d Detail-----\n",i+1);
        printf("Enter p Name:- ");
        scanf("%s",pd[i].name);
        printf("Enter id:- ");
        scanf("%d",&pd[i].id);
        printf("Enter Quantity:- ");
        scanf("%d",&pd[i].qnt);
    }
    int temp=0;
    product a;

    for(int i=0;i<3;i++){
        if(temp < pd[i].qnt){
            temp = pd[i].qnt;
            a=pd[i];
        }
    }
    printf("Product Name:- %s ID:- %d Quantity:- %d",a.name,a.id,temp);
    
    
    return 0;
}