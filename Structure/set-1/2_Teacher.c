#include<stdio.h>
#include<string.h>
struct teacher
{
    char name[20];
    int age;
    float salary;
};

int main(){
    struct teacher s1;
    printf("Enter Name:- ");
    fgets(s1.name,sizeof(s1.name),stdin);
    printf("Enter Age:- ");
    scanf("%d",&s1.age);
    printf("Enter Salary:- ");
    scanf("%f",&s1.salary);
    
    printf("Name:- %sAge:- [%d]\nSalary:- [%.02f]\n",s1.name,s1.age,s1.salary);

    return 0;
}