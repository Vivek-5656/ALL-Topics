#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int id;
};

int main(){
    struct student dtt;
    printf("Enter Name:- ");
    fgets(dtt.name,sizeof(dtt.name),stdin);
    printf("Enter ID:- ");
    scanf("%d",&dtt.id);

    struct student *ptr;
    ptr = &dtt;
    
    printf("Name:- %sID:- %d",(*ptr).name,ptr->id);

    return 0;
}