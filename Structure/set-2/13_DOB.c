// Store Student Date of Birth Using a Nested Structure
// Define a nested structure Student with DOB as a substructure (day, month, year). 
// Take input and display the birth date.
// Example Input:
// John, 15, 8, 2000
#include<stdio.h>
#include<string.h>
struct dob
{
    char day[30];
    char month[50];
    int year;
};
struct student
{
    char name[20];
    struct dob birth;
};


int main(){
    struct student details;
    printf("Enter Name:- ");
    fgets(details.name,sizeof(details.name),stdin);

    printf("Enter Day:- ");
    scanf("%s",&details.birth.day);
    
    printf("Enter Month:- ");
    scanf("%s",&details.birth.month);
   
    printf("Enter Year:- ");
    scanf("%d",&details.birth.year);

    char name[200];
    name[strcspn(name,"\n")]='0';
   

    printf("Name:- %sDOB:- %s/%s/%d",details.name,details.birth.day,details.birth.month,details.birth.year);

    return 0;
}