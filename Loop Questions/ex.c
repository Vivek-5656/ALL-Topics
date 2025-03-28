#include <stdio.h>

int main() {
  int n;
  printf("Enter number value :- ");
  scanf("%d",&n);

  int max=0;
  int min=9;
  int rem;
  while(n!=0){
      rem=n%10;
      if(rem > max){
        max=rem;
      } else if(rem < min){
        min=rem;
      }
       n=n/10;
  }
  printf("%d is Max\n",max);
  printf("%d is Min.",min);
   
   
  return 0;
}    