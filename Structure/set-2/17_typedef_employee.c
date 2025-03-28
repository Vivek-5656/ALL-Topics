// Use Typedef for Employee Details
// Use typedef to define an Employee structure and display employee details.
// Example Input:
// John, 101, 50000
#include<stdio.h>
#include<string.h>
typedef struct employee
{
    char name[100];
    int id;
    int salary;
}income;

int main(){
    income s1;
    printf("Enter Name:- ");
    scanf("%s",s1.name);

    printf("Enter ID:- ");
    scanf("%d",&s1.id);

    printf("Enter Salary:- ");
    scanf("%d",&s1.salary);

    printf("Name:- %s ID:- %d Salary:- %d",s1.name,s1.id,s1.salary);

    return 0;
}