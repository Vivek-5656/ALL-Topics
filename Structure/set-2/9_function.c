// Take Student Details through a Function and Display Them
//  Write a function to take student details (name, roll number, marks) and return a structure. Display the details in the main function.
#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
struct student input(){
    struct student s;
    printf("Enter Name:- ");
    scanf("%s",&s.name);
    // fgets(s.name,sizeof(s.name),stdin);
    printf("Enter Roll Number:- ");
    scanf("%d",&s.roll);
    printf("Enter Marks:- ");
    scanf("%f",&s.marks);
    return s;
}
// struct student output(){
//     struct student s2;
//     printf("Name:- %sRoll :- %d Marks:- %f",s.name,s.roll,s.marks);
//     return s2;
// }
void output(struct student s)
{
    printf("[Name:- %s  Roll Num:- %d Marks:- %.02f]\n",s.name,s.roll,s.marks);
}


int main(){
    struct student s1=input();
    struct student s2=input();
    output(s1);
    output(s2);

    return 0;
}