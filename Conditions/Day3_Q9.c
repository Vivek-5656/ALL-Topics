#include<stdio.h>

int main(){

    int physics;
    printf("Enter marks:- ");
    scanf("%d",&physics);

    int chemistry;
    printf("Enter marks:- ");
    scanf("%d",&chemistry);

    int biology;
    printf("Enter marks:- ");
    scanf("%d",&biology);

    int mathmetics;
    printf("Enter marks:- ");
    scanf("%d",&mathmetics);

    int computer;
    printf("Enter marks:- ");
    scanf("%d",&computer);

    printf("Marks of five subects:- %d, %d, %d, %d, %d \n",physics,chemistry,biology,mathmetics,computer);

    float marks = physics + chemistry + biology + mathmetics + computer;
    float percentege = ((marks/500)*100);
    printf("Percentage :- %f\n",percentege);
    

    if(percentege >= 90){
        printf("Grade A");
    } else if(percentege >= 80){
        printf("Grade B");
    } else if(percentege >= 70){
        printf("Grade C");
    } else if(percentege >= 60){
        printf("Grade D");
    } else if(percentege >= 40){
        printf("Grade E");
    } else if(percentege < 40){
        printf("Grade F");
    }

    return 0;
}