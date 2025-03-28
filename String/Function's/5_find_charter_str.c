#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Hello,World";
    char *pos=strchr(str,'W');
    if(pos){
        printf("Character found at position %d",pos-str);
    } else{
        printf("Character not found");
    }



    return 0;
}