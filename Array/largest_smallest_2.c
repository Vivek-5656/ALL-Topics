#include<stdio.h>
int main(){
// Find Maximum Value and Minimum Value
    int larger[8]={1,-2,5,8,22,10,555,525};
    int max=0;
    int min=9;
    for(int i=0;i<8;i++){
        if(max<=larger[i]){
            max=larger[i];
        }
        if(min>=larger[i]){
            min=larger[i];
        }
    }
    printf("max = %d\nmin = %d",max,min);
    return 0;
}