#include<stdio.h>
union temprature
{
    float celcius;
    float faranhite;
};

int main(){
    union temprature temp;
    float f=0,c=0;
    
        printf("Enter Celsius:- ");
        scanf("%f",&temp.celcius);
        f = (temp.celcius*9/5)+32;
        printf("Faranhite:- %.02f\n",f);
    
        printf("Enter Faranhite:- ");
        scanf("%f",&temp.faranhite);
        c = (temp.faranhite-32)*5/9;
        printf("Celsius:- %.02f",c);
    

    return 0;
}