#include<stdio.h>
#include<string.h>
typedef struct student_Details
{
    char name[100];
    int roll;
    float marks;
}student;

int main(){
    int s;
    printf("Enter s:- ");
    scanf("%d",&s);
    student std[s];
    for(int i=0;i<s;i++){
        printf("Enter Name:- ");
        scanf("%s",&std[i].name);
        printf("Enter Roll Number:- ");
        scanf("%d",&std[i].roll);
        printf("Enter Marks:- ");
        scanf("%f",&std[i].marks);
    }

    for(int i=0;i<s;i++){
        printf("Student %d: Name:- %s, Roll Num:- %d, Marks:- %.02f\n",i+1,std[i].name,std[i].roll,std[i].marks);
    }

    return 0;
}