#include<stdio.h>
// Count the occurrences of a specific number in an array.

int main(){
    int num;
    printf("Enter Index Number:- ");
    scanf("%d",&num);
    
    int occurence[num];
    printf("Enter Elements:- \n");
    for(int h=0;h<num;h++){
        scanf("%d",&occurence[h]);
    }
    int count=0;
    int check = 2;
    for(int i=0;i<num;i++){
        if(occurence[i]==check){
            count=count+1;
        }
    }
    printf("Occurences is = %d",count);
    return 0;
}