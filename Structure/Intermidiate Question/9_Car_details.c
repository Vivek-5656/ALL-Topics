#include<stdio.h>
#include<string.h>
typedef struct car_detail
{
    char brand[100];
    char modal[100];
    int price;
}detail;

int main(){
    detail car[3];
    for(int i=0;i<3;i++){
        printf("Enter Details:- %d \n",i+1);
        printf("Enter Brand:- ");
        scanf("%s",car[i].brand);
        printf("Enter Modal:- ");
        scanf("%s",car[i].modal);
        printf("Enter Price:- ");
        scanf("%d",&car[i].price);
    }

    int val=35000;
    for(int i=0;i<3;i++){
        if(car[i].price > val){
            printf("Car %d: Brand:- %s Modal:- %s Price:- %d\n",i+1,car[i].brand,car[i].modal,car[i].price);
        }
    }

    return 0;
}