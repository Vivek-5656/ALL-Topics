#include<stdio.h>
int main()
{
    int size;  // 5
    printf("Enter size:- ");
    scanf("%d",&size);
   int num;
    int store[size];
    printf("Enter Elements:- \n");
    for(int i=0;i<size;){
        
        printf("Enter num:- ");
        scanf("%d",&num);
        if(num==0 || num==1){
            store[i]=num;
            i++;
        }
    }
    for(int i=0;i<size;i++){
       printf("%d",store[i]);
    }
    // -- Pending

    return 0;
}