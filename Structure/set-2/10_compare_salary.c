// Compare Two Employees' Salaries Using a Function
// Write a function that takes two employee structures as arguments and compares their salaries. Display who earns more
// Example Input:
//  John, 45000
//  Alice, 60000
#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int salary;
};
struct employee input(){
    struct employee dtt;
    printf("Enter Name:- ");
    scanf("%s",&dtt.name);
    printf("Enter Salary:- ");
    scanf("%d",&dtt.salary);
    return dtt;
}
// void output(struct employee dtt){
//     if()
// }

int main(){
    struct employee s1=input();
    struct employee s2=input();
    (s1.salary > s2.salary)?printf("Highest salary of %s",s1.name):printf("Highest salary of %s",s2.name);

    return 0;
}