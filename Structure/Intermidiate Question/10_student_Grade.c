#include<stdio.h>
#include<string.h>
typedef struct student_Result
{
    char name[100];
    int roll;
    int grades[3];
    int marks;
}student;
void input(student std[],int s){
    for(int i=0;i<s;i++){
        printf("Enter Student Name:- ");
        scanf("%s",std[i].name);
        printf("Enter Roll Num:- ");
        scanf("%d",&std[i].roll);
        printf("Enter Marks:- \n");
        for(int j=0;j<3;j++){
            scanf("%d",&std[i].grades[j]);
        }
        std[i].marks=0;
    }
}
void output(student std[],int s){
    // int sum[3];
    int add=0;
    for(int i=0;i<s;i++){
        for(int j=0;j<3;j++){
            add = add + std[i].grades[j];
        }    
        std[i].marks=add; 
        add=0;   
    }
    int max=0;
    student store;
    for(int i=0;i<s;i++){
        if(max < std[i].marks){
            max=std[i].marks;
            store = std[i];
        }
    }
    printf("Pass: Name:- %s, Roll:- %d, Marks:- %d",store.name,store.roll,store.marks);
}
int main(){
    int s;
    printf("s = ");
    scanf("%d",&s);
    student std[s];
    input(std,s);
    output(std,s);

    return 0;
}