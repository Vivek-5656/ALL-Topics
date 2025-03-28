#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int id;
    float marks;
}det;

int main(){
    FILE *file=fopen("detail.txt","r");
    fscanf(file,"%s %d %f",det.name,&det.id,&det.marks);
    printf("%s %d %f",det.name,det.id,det.marks);

    FILE *file = fopen("det.txt","a");
    strcpy(det.name,"coding");
    det.id=101;
    det.marks=20;
    fprintf(file,"%s %d %f",det.name,det.id,det.marks);

    

    return 0;
}