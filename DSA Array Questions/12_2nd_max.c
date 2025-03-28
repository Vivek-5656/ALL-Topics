#include<stdio.h>
void input(int arr[],int s){
  printf("Enter Elements:- \n");
  for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
  }
 
}

void output(int arr[],int s){
  int temp;
  for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
      if(arr[i] > arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  int s_max = arr[s-2];
  printf("Second Max is:- %d",s_max);
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