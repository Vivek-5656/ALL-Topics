#include<stdio.h>
void input(int arr[],int s){
  printf("Enter Elements:- \n");
  for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
  }
 
}

void output(int arr[],int s){
  int position=2;
  for(int i=position-1;i<s;i++){
    arr[i]=arr[i+1];
  }
  
 for(int i=0;i<s-1;i++){
    printf("%d ",arr[i]);
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