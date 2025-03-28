#include<stdio.h>
int main(){
    int s;
    printf("Enter size:- ");
    scanf("%d",&s);
    int arr[s];
    printf("Enter Elements:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    int ec=0,oc=0; 
    int even[ec];
    int odd[oc];

    for(int i=0;i<s;i++){
        if(arr[i]%2==0){
            even[ec]=arr[i];
            ec++;
        } 
        else{
            odd[oc]=arr[i];
            oc++;
        }
    }
    printf("Even\n");
    for(int i=0;i<ec;i++){
        printf("%d ",even[i]);
    } 
    printf("\nOdd\n");
    for(int i=0;i<oc;i++){
        printf("%d ",odd[i]);
    }

    return 0;
}