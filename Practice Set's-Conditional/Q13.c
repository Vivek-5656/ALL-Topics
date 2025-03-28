#include<stdio.h>

int main(){
//  Write a program to check the eligibility for a loan based on income and credit score.

    int annualIncome;
    printf("Enter your Annual Income :- ");
    scanf("%d",&annualIncome);

    int creditScore;
    printf("Enter your Credit Score :- ");
    scanf("%d",&creditScore);

    if(annualIncome >= 100000){
        if(creditScore >= 650){
            printf("You are eligble for loan.");
        } else{
            printf("Low Credit Score. Sorry, you are not eligble for loan.");
        }
    } else{
        printf(" Insufficient Income . Sorry, you are not eligble for loan.");
    }

    return 0;
}