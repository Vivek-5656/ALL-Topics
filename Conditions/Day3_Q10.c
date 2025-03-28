#include<stdio.h>

int main(){
// Write a C program to input the basic salary of an employee and calculate gross salary according to given conditions.

    int basic_Salary,hra,da,ta;
    printf("Enter BASIC SALARY:- ");
    scanf("%d",&basic_Salary);
    printf("Enter HRA:- ");
    scanf("%d",&hra);
    printf("Enter DA:- ");
    scanf("%d",&da);
    printf("Enter TA:- ");
    scanf("%d",&ta);
    int gross_Salary=basic_Salary+hra+da+ta;
    printf("Gross Salary = %d",gross_Salary);

    return 0;
}