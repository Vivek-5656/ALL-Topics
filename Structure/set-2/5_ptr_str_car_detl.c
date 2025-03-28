// Q5: Store and Display Car Details Using a Pointer
//  Write a program to store details of a car (brand, model, price) using a structure 
//  pointer and display the details.
#include<stdio.h>
#include<string.h>
struct car
{
    char brand[20];
    char model[30];
    int price;
};

int main(){
    struct car cdt;
    printf("Enter Brand Name:- ");
    fgets(cdt.brand,sizeof(cdt.brand),stdin);
    printf("Enter Model Name:- ");
    fgets(cdt.model,sizeof(cdt.model),stdin);
    printf("Enter Price:- ");
    scanf("%d",&cdt.price);

    struct car *ptr;
    ptr=&cdt;
    printf("Car:- [ Brand:- %s Model:- %s Price [%d] ]",ptr->brand,ptr->model,ptr->price);

    return 0;
}