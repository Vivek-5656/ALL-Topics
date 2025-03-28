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
    struct student s2={.rollnum=23,.marks=96.36,.name="Karan"}; // this is main
    
    printf("name = %s rollnum = %d marks = %f\n",s1.name,s1.rollnum,s1.marks);
    printf("name = %s rollnum = %d marks = %f",s2.name,s2.rollnum,s2.marks);
    
    return 0;
}