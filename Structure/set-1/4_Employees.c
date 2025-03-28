#include<stdio.h>
#include<string.h>
struct employees
{
    char name [20];
    int id;
    float salary;
};

int main(){
    struct employees details[3];
    for(int i=0;i<3;i++){
        printf("Enter Name:- ");
        // scanf("%s",details[i].name);
        fgets(details[i].name,sizeof(details[i].name),stdin);
        printf("Enter ID:- ");
        scanf("%d",&details[i].id);
        printf("Enter Salary:- ");
        scanf("%f",&details[i].salary);
    }
    printf("Details Of Employee:- \n");
    for(int i=0;i<3;i++){
        printf("Employee %d: Name:-  %s, ID:- %d, Salary:- %.02f\n",i+1,details[i].name,details[i].id,details[i].salary);
    }

    return 0;
}