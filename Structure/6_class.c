#include<stdio.h>
// ------------------------------------Nested Structure--------------------------------
struct add
{
    char ad;
    int pin;
};
struct student
{
    char name;
    int marks;
    struct add ads;
};


int main(){
    struct student std;
    printf("Enter Name:- ");
    scanf("%c",&std.name);
    printf("Enter marks:- ");
    scanf("%d",&std.marks);
    printf("Enter Address:- ");
    scanf(" %c",&std.ads.ad);
    printf("Enter Pin:- ");
    scanf("%d",&std.ads.pin);
    printf("Name:- %c Marks:- %d\n",std.name,std.marks);
    printf("Address:- %c Pin:- %d",std.ads.ad,std.ads.pin);

    return 0;
}