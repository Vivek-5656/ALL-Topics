#include<stdio.h>
#include<string.h>
struct student
{
    char *name;
    int id;
};

int main(){
    char str[20];
    printf("Enter Name:- ");
    fgets(str,sizeof(str),stdin);
    struct student s1;
    s1.name = str;
    printf("Enter ID:- ");
    scanf("%d",&s1.id);
    printf("Name:- %sID:- %d",s1.name,s1.id);

    return 0;
}