#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[100];
    int age;
    char add[200];
}student;

int main(){
    student details;
    printf("Enter Name:- ");
    fgets(details.name,sizeof(details.name),stdin);
    char name[100];
    name[strcspn(name,"\n")]='\0';

    printf("Enter Age:- ");
    scanf("%d",&details.age);

    printf("Enter Address:- ");
    scanf("%s",&details.add);
    // fgets(details.add,sizeof(details.add),stdin);
    // getchar();

    printf("Name:- %s Age %d Address:- %s",details.name,details.age,details.add);

    return 0;
}