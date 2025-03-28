#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int id;
};

int main(){
    struct student std;
    // std.name[20]="Vivek Anand";
    printf("Enter Name:- ");
    scanf("%s",&std.name);
    // std.id=56;
    printf("Enter ID:- ");
    scanf("%d",&std.id);
    struct student *ptr;
    ptr=&std;
    printf("Name %s ID %d",(*ptr).name,ptr->id);
    

    return 0;
}