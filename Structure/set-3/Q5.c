#include<stdio.h>
typedef struct complex
{
    int real;
    int img;
}cmp;

int main(){
    cmp arr[2];
    for(int i=0;i<2;i++){
        printf("Enter real:- ");
        scanf("%d",&arr[i].real);

        printf("Enter Complex:- ");
        scanf("%d",&arr[i].img);
    }
    for(int i=0;i<2;i++){
        printf("Real:- %d Imag:- %d\n",arr[i].real,arr[i].img);
    }
    cmp brr;
    brr.real = 0;
    brr.img = 0;
    for(int i=0;i<2;i++){
        brr.real = arr[i].real + brr.real;
        brr.img = arr[i].img + brr.img;
    }
    printf("%d %d",brr.real,brr.img);

    return 0;
}
