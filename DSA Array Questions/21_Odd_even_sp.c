#include<stdio.h>
void input(int arr[],int s){
  printf("Enter Elements:- \n");
  for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
  }
 
}

void output(int arr[],int s){
    printf("---Even Number-------\n");
    for(int i=0;i<s;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }  
    }
    printf("\n---Odd Number-------\n");
    for(int i=0;i<s;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
        }  
    }

 
}
int main(){
  int s;
  printf("Enter Size of Array:- ");
  scanf("%d",&s);
  int arr[s];
  input(arr,s);
  output(arr,s);

  return 0;
}