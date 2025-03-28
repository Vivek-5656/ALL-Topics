#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int rollnum;
    float marks;
};

int main(){
    struct student s1= {"Vivek",22,36.5};
    printf("name = %s rollnum = %d marks = %f",s1.name,s1.rollnum,s1.marks
    );
    
    return 0;
}