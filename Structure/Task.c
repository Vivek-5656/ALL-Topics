#include<stdio.h>
#include<string.h>
struct student
{
    int a;
    char name[100];

};
struct student input(){
    struct student std;
    printf("Enter a:- ");
    scanf("%d",&std.a);
    printf("Enter Name:- ");
    scanf(" %s",&std.name);
    return std;
}
void output(struct student s){
    printf("a = %d Name = %s\n",s.a,s.name);
} 
int main(){
    struct student s=input();
    struct student s2=input();
    output(s);
    output(s2);

    return 0;
}