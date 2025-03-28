#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[100];
    int age;
    float marks;
}std;
std input(){
    std s;
    printf("Enter Name:- ");
    scanf("%s",&s.name);
    printf("Enter Age:- ");
    scanf("%d",&s.age);
    printf("Enter Marks:- ");
    scanf("%f",&s.marks);
    
    return s;
}
void output(std s){
    printf("Name:- %s Age:- %d Marks:- %.02f\n",s.name,s.age,s.marks);
}

int main(){
    std s1 = input();
    std s2 = input();
    output(s1);
    output(s2);

    return 0;
}