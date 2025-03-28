#include<stdio.h>
#include<string.h>
int main(){
   char str[100];
   printf("Enter string:- \n");
   fgets(str,sizeof(str),stdin);
   int len=strlen(str)-1;
   for(int i=0;i<len;i++){
      if(str[i]!=' '){
         printf("%c",str[i]);
      }
   }
   

   return 0;
}