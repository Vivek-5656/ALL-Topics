#include<stdio.h>
#include<string.h>
struct students
{
    char name[20];
    int rollNum;
    float marks;
};

int main(){
    struct students dtt[3];
    printf("Enter Details of Students\n");
    for(int i=0;i<3;i++){
        printf("Enter Name:- ");
        scanf("%s",dtt[i].name);
        printf("Enter Roll Number:- ");
        scanf("%d",&dtt[i].rollNum);
        printf("Enter Marks:- ");
        scanf("%f",&dtt[i].marks);
    }
    // printf("Details of Students\n");
    for(int i=0;i<3;i++){
        
    }

    return 0;
}