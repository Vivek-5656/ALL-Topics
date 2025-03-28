#include<stdio.h>
#include<string.h>
struct employees
{
    char name[20];
    int id;
    float salary;
};
//  Filter Employees by Salary
int main(){
    int size;
    printf("Enter Size:- ");
    scanf("%d",&size);
    struct employees emp[size];
    printf("----------- Enter Details------------\n");
    for(int i=0;i<size;i++){
        printf("Enter Name:- ");
        scanf("%s",&emp[i].name);
        printf("Enter ID:- ");
        scanf("%d",&emp[i].id);
        printf("Enter Salary:- ");
        scanf("%f",&emp[i].salary);
    }
    for(int i=0;i<size;i++){
        if(emp[i].salary > 50000){
            printf("Name:- %s ID:- %d Salary:- %.02f\n",emp[i].name,emp[i].id,emp[i].salary);
        }
    }

    return 0;
}