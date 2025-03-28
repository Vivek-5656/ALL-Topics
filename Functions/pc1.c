#include<stdio.h>

int main(){
    int n=153, c=0,rem,power,sum=0;

    int t=n;
    
    while (t!=0) {
        t/=10;
        c++;
    }
    printf("Count is = %d\n",c);

    t=n;

    while (t!=0){
        rem=t%10;
        power = 1;
        for(int i=1;i<=c;i++){
            power =power*rem;
            // sum=sum+power*(rem,c);
        }
        sum+=power;
        t/=10;
    }
        
    if(n==sum){
        printf("%d is Armstrong Number.",n);
    }
    else{
        printf("%d is Not Armstrong Number.",n);
    }

    return 0;
}