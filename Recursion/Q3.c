#include<stdio.h>

int oneToTen(int sp, int ep){
    if(sp<=ep){
        return sp;
    }
    return oneToTen(sp+1,ep);
    
}

int main(){

    int ans = oneToTen(1,10);
    printf("ans = %d\n",ans);

    return 0;
}