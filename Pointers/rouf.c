// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
     char pwd[100]="test";
     char salt[100];
     printf("Enter Salt:- \n");
     fgets(salt,sizeof(salt),stdin);
     int s = strlen(pwd);
     int s2 = strlen(salt)-1;
     char newpwd[s+s2];
     for(int i=0;pwd[i]!='\0';i++){
         newpwd[i]=pwd[i];
     }
     for(int i=0;salt[i]!='\0';i++){
         newpwd[i+s]=salt[i];
     }
     puts(newpwd);
    

    return 0;
}