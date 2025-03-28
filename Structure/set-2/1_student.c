#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollNum;
    float marks;
};

int main(){
    struct student det[3];
    printf("Enter Student Details\n");
    for(int i=0;i<3;i++){
        printf("Enter Name:- ");
        // scanf("%s",&det[i].name);
        fgets(det[i].name,sizeof(det[i].name),stdin);
        printf("Enter Roll Number:- ");
        scanf("%d",&det[i].rollNum);
        printf("Enter Marks:- ");
        scanf("%f",&det[i].marks);
        getchar();
    }
    printf("Students Details\n");
    for(int i=0;i<3;i++){
        printf("Name:- %s Roll Number:- %d Marks:- %.02f\n",det[i].name,det[i].rollNum,det[i].marks);
    }
    char name[200];
    name[strcspn(name,"\n")]='0';

    return 0;
}