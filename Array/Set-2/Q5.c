#include<stdio.h>
int main(){
    // Write a program to nd the rst repeating element in an array?

    int s,store,c=0;
    printf("Enter size of the array:- ");
    scanf("%d",&s); 
    int arr[s];
    printf("Enter Elements:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements\n");
    for(int i=0;i<s;i++){
        printf("[%d]",arr[i]);
    }
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(arr[i]==arr[j]){
                store=arr[i];
                c++;
            }
        }
    }
    printf("\n repeating element:- [%d] [%d] times",store,c);

    return 0;
}