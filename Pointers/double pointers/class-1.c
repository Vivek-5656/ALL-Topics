// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a;
    printf("Enter a:- ");
    scanf("%d",&a);
    int *ptr=&a;
    int **ptr1=&ptr;
    
    // printf("Ptr = %d\n",*ptr);
    printf("Ptr1 = %d\n",*ptr1);
    printf("Ptr1 = %d",**ptr1);

    return 0;
}