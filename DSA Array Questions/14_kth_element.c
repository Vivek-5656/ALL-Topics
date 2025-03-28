#include<stdio.h>
void input(int arr[],int s){
  printf("Enter Elements:- \n");
  for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
  }

  
 
}

void output(int arr[],int s){
  int search;
  printf("Enter Search Element Index:- ");
  scanf("%d",&search);

  for(int i=0;i<s;i++){
    if(i == search){
        printf("Searching Element is:- %d",arr[i]);
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