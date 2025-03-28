#include<stdio.h>
// --------------------------------- Find Array Size ------------------------------------------
int main()
{
    int arraysize[]={5,6,4,7,3};
    int size = sizeof(arraysize)/sizeof(int);
    printf("%d",size);

    return 0;
}