#include<stdio.h>
#include<string.h>
union data
{
    int a;
    char c;
    double d;
};

int main(){
    union data d;
    printf("%lu \n",sizeof(union data));
    scanf("%d",&d.a);
    printf("a = %d\n",d.a);
    scanf(" %c",&d.c);
    printf("c = %c",d.c);


    return 0;
}