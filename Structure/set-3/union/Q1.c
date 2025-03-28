#include<stdio.h>
// #include<string.h>
union data
{
    int integer;
    float decimal;
    char ch;   
};

int main(){
    union data dt;
    printf("Enter Interger:- ");
    scanf("%d",&dt.integer);
    printf("Interger:- %d\n",dt.integer);

    printf("Enter Float:- ");
    scanf("%f",&dt.decimal);
    printf("Float:- %.02f\n",dt.decimal);

    printf("Enter Char:- ");
    scanf(" %c",&dt.ch);
    printf("Char:- %c\n",dt.ch);
    

    return 0;
}