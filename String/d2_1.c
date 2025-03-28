#include<stdio.h>
int main(){
   // copy 
   char main[20]="Coding Age";
   char copy[20];
   for(int i=0;main[i]!='\0';i++){
      copy[i]=main[i];
      printf("%c",copy[i]);
   }
    

   return 0;
}