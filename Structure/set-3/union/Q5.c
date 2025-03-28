#include<stdio.h>
#include<string.h>
union employeeData
{
    char department[100];
    int id;
    float salary;
};

int main(){
    union employeeData emp;
    printf("Enter Employee Department:- ");
    scanf("%s",&emp.department);
    printf("Department:- %s\n",emp.department);

    printf("Enter Employee ID:- ");
    scanf("%s",&emp.id);
    printf("ID:- %d\n",emp.id);

    printf("Enter Employee Salary:- ");
    scanf("%f",&emp.salary);
    printf("Salary:- %.02f\n",emp.salary);

    return 0;
}