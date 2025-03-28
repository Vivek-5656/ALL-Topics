#include<stdio.h>
#include<string.h>
typedef struct employee
{
    char name[100];
    int id;
    int salary;
}emp;
void output(emp ed[],int s){
    for(int i=0;i<s;i++){
        printf("Employee %d: Name:- %s ID:- %d Salary:- %d\n",i,ed[i].name,ed[i].id,ed[i].salary);
    }
}

int main(){
    int s;
    printf("Enter s:- ");
    scanf("%d",&s);
    emp arr[s];
    for(int i=0;i<s;i++){
        printf("Enter Name:- ");
        scanf("%s",&arr[i].name);
        printf("Enter ID:- ");
        scanf("%d",&arr[i].id);
        printf("Enter Salary:- ");
        scanf("%d",&arr[i].salary);
    }
    output(arr,s);

    return 0;
}