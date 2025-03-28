// Calculate Employee Bonus Based on Experience
// Write a function to calculate an employeeʼs bonus 20% of salary if experience is more than 10 years).
// Example Input:
// Alice, 60000, 12 years
#include<stdio.h>
#include<string.h>
typedef struct bonus
{
    char name[100];
    int salary;
    int year;
    // int bns;
}employee;
employee input(){
    employee st;
    printf("Enter Name:- ");
    scanf("%s",&st.name);
    printf("Enter Salary:- ");
    scanf("%d",&st.salary);
    printf("Enter Year:- ");
    scanf("%d",&st.year);
     
    return st;
}
void output(employee st){
    int bonus=0;
    if(st.year > 10){
        bonus = st.salary * 20/100;
    }
    printf("Bonus:- %d",bonus);
}

int main(){
    employee st=input();
    output(st);

    return 0;
}