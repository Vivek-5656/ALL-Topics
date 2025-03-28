#include<stdio.h>
// Print numbers from 1 to 10 using functions.
    void number();
    int main(){

        number();
        return 0;
    }

    void number(){
        int a=1;
        for(a;a<=10;a++){
            printf("%d\n",a);
        }
    }
