// Store Product Details Dynamically Using a Pointer
//  Create a Product structure with fields for product ID, name, and cost. Use a pointer to for storing product details and display them
#include<stdio.h>
#include<string.h>
struct product
{
    int id;
    char name[20];
    float cost;
};

int main(){
    struct product psd;
    printf("Enter Product ID:- ");
    scanf("%d",&psd.id);
    printf("Enter Product Name:- ");
    // fgets(psd.name,sizeof(psd.name),stdin);
    scanf("%s",&psd.name);
    printf("Enter Product Cost:- ");
    scanf("%f",&psd.cost);

    struct product *ptr;
    ptr=&psd;
    printf("Product = ID [%d] Name %s Cost %.02f",ptr->id,ptr->name,ptr->cost);

    return 0;
}