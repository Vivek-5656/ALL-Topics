#include<stdio.h>
#include<string.h>
typedef struct result
{
    char name[100];
    int roll;
    float marks[5];
}student;
student input(){
    student std;
    printf("Enter Name:- ");
    scanf("%s",&std.name);
    printf("Enter Roll Num:- ");
    scanf("%d",&std.roll);
    printf("Enter Marks:- \n");
    for(int i=0;i<5;i++){
        scanf("%f",&std.marks[i]);
    }
    return std;
}
void output(student std){
    int total=0;
    float avg=0;
    int c=0;
    printf("Name:- %s\nRoll Num:- %d\nMarks:- ",std.name,std.roll);
    for(int i=0;i<5;i++){
        c++;
        total = total + std.marks[i];
        printf("%.02f ",std.marks[i]);
    }
    avg = total/c;
    printf("\nTotal = %d\nAverage = %.02f",total,avg);
}

int main(){
    student std = input();
    output(std);

    return 0;
}