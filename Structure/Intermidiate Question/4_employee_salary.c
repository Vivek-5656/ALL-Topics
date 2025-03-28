#include<stdio.h>
#include<string.h>
typedef struct employeeSalary
{
    char name[100];
    int id;
    float salary;
}employee;

int main(){
    int s;
    printf("Enter s:- ");
    scanf("%d",&s);

    employee emp[s];
    for(int i=0;i<s;i++){
        printf("Enter Name:- ");
        scanf("%s",&emp[i].name);

        printf("Enter ID:- ");
        scanf("%d",&emp[i].id);

        printf("Enter Salary:- ");
        scanf("%f",&emp[i].salary);
    }

    for(int i=0;i<s;i++){
        if(emp[i].salary > 50000){
            printf("Employee %d: Name:- %s ID:- %d Salary:- %.02f\n",i+1,emp[i].name,emp[i].id,emp[i].salary);
        }
    }

    return 0;
}