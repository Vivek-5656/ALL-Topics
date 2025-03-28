#include<stdio.h>
#include<string.h>
typedef struct sortStudent
{
    char name[100];
    int roll;
    float marks;
}student;

int main(){
    int s;
    printf("Enter s:- ");
    scanf("%d",&s);
    student dtt[s];

    for(int i=0;i<s;i++){
        printf("Enter Name:- ");
        scanf("%s",&dtt[i].name);
        printf("Enter Roll Num:- ");
        scanf("%d",&dtt[i].roll);
        printf("Enter Marks:- ");
        scanf("%f",&dtt[i].marks);

    }
    student temp;

    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(dtt[i].marks < dtt[j].marks){
                temp = dtt[i];
                dtt[i]=dtt[j];
                dtt[j]=temp;
            }
        }
    }
    for(int i=0;i<s;i++){
        printf("Name:- %s Roll:- %d Marks:- %.02f\n",dtt[i].name,dtt[i].roll,dtt[i].marks);
    }

    return 0;
}