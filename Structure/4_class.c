#include<stdio.h>
// #include<string.h>
struct person
{
    char ch;
    int age;
};

int main(){
    struct person prr[2];
    for(int i=0;i<2;i++){
        printf("Name:- ");
        scanf(" %c",&prr[i].ch);
        printf("Age:- ");
        scanf("%d",&prr[i].age);
    }
    for(int i=0;i<2;i++){
        printf("Name %c Age %d\n",prr[i].ch,prr[i].age);
    }


    return 0;
}