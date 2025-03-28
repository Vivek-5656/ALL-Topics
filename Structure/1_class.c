#include<stdio.h>
struct person
{
    
    char name;
    int age;
    int add;
    
};

int main(){
    struct person s1;

    printf("%lu\n",sizeof(struct person));
    printf("Person:- \n");
    scanf("%c",&s1.name);
    scanf("%d",&s1.age);
    scanf("%d",&s1.add);
    printf("name %c, age %d, add %d",s1.name,s1.age,s1.add);

    return 0;
}