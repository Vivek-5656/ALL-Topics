#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int rollNum;
    float marks;
};

int main(){
    struct student s1;
    printf("Enter String:- \n");
    fgets(s1.name,sizeof(s1.name),stdin);
    printf("Enter RollNumber:- ");
    scanf("%d",&s1.rollNum);
    printf("Enter Marks:- ");
    scanf("%f",&s1.marks);
    printf("Name:- %sRoll Num:- %d\nMarks:- %.02f\n",s1.name,s1.rollNum,s1.marks);
    
    return 0;
}