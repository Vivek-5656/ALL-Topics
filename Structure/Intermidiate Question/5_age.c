#include<stdio.h>
#include<string.h>
struct address
{
    int hn;
    char dist[100];
    char st[100];
};
typedef struct person
{
    char name[100];
    int age;
    struct address add;
}psn;
void input(psn dtt[],int s){
    
    for(int i=0;i<s;i++){
        printf("--------Person %d------\n",i+1);
        printf("Enter Name:- ");
        scanf("%s",dtt[i].name);
        printf("Enter Age:- ");
        scanf("%d",&dtt[i].age);
        printf("Enter Address:- \n");
        printf("H Num:- ");
        scanf("%d",&dtt[i].add.hn);
        printf("District:- ");
        scanf("%s",dtt[i].add.dist);
        printf("Enter State:- ");
        scanf("%s",dtt[i].add.st);
    }
    printf("\n");

}
 // printf("Person %d: Name:- %s || Age:- %d || Address:- %d, %s, %s\n",i+1,dtt[i].name,dtt[i].age,dtt[i].add.hn,dtt[i].add.dist,dtt[i].add.st);
void output(psn dtt[],int s){
    for(int i=0;i<s;i++){
       if(dtt[i].age < 25){
        printf("Youngest Person:- Name:- %s || Age:- %d || Address:- %d, %s, %s\n",dtt[i].name,dtt[i].age,dtt[i].add.hn,dtt[i].add.dist,dtt[i].add.st);
       } else if(dtt[i].age > 30){
        printf("Oldest Person:-  Name:- %s || Age:- %d || Address:- %d, %s, %s\n",dtt[i].name,dtt[i].age,dtt[i].add.hn,dtt[i].add.dist,dtt[i].add.st);
       }
    }
}

int main(){
    int s;
    printf("Enter s:- ");
    scanf("%d",&s);
    psn dtt[s];
    input(dtt,s);
    output(dtt,s);

    return 0;
}