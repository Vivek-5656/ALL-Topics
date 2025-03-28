#include<stdio.h>
int main(){
    int n;
    printf("Enter size:- ");
    scanf("%d",&n);
    int avg[n];
    printf("Enter Elements:- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&avg[i]);
    }

    int evensum=0,oddsum=0,evenc=0,oddc=0;

    int evenAvg;
    int oddAvg;

    for(int i=0;i<n;i++)
    {
        if(avg[i]%2==0)
        {
            evensum+=avg[i]; 
            evenc++;
            
        }
        else
        {
            oddsum+=avg[i];
            oddc++;
            
        }
    }
    evenAvg = evensum/evenc;
    oddAvg = oddsum/oddc;
    printf("Even = %d \n",evenAvg);
    printf("Odd = %d",oddAvg);
    return 0;
}