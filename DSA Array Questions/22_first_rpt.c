#include<stdio.h>
void input(int arr[],int s){
  printf("Enter Elements:- \n");
  for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
  }
 
}

void output(int arr[],int s){
    int c=0;
    int store=0;
    int num=2;
    for(int i=0;i<s;i++){
        
            if(num == arr[i]){
                c=c+1;
                store=arr[i];
            }
        
    }
    printf("First Repeatating = %d and %d Times",store,c);

 
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