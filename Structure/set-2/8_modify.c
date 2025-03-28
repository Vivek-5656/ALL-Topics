// Modify Person Details Using Pointers
// Create a Person structure with fields for name and age. Modify the age value using a pointer.
//  Example Input:
//  Original: Alice, 25
//  Modified: Alice, 30
#include<stdio.h>
#include<string.h>
struct modify
{
    char name[20];
    int age;
};

int main(){
    struct modify mdd;
    printf("Enter Name:- ");
    fgets(mdd.name,sizeof(mdd.name),stdin);
    printf("Enter Age:- ");
    scanf("%d",&mdd.age);

    struct modify *ptr;
    ptr=&mdd;
    printf("Name:- %sOriginal Age:- %d\n",ptr->name,ptr->age);
    printf("Enter Modify Age:- "); 
    scanf("%d",&mdd.age);
    printf("Name:- %sModify Age:- %d",ptr->name,ptr->age);


    return 0;
}