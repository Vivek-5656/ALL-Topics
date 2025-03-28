#include<stdio.h>
int main(){
    
    int evenOrOdd[4];
    printf("Enter elements:- \n");
    for(int i=0;i<4;i++){
        scanf("%d",&evenOrOdd[i]);
    }

    for(int i=0;i<4;i++){
        if (evenOrOdd[i]%2==0)
        {
            printf("Even = %d\n",evenOrOdd[i]);
        }
        
    }

    return 0;
}