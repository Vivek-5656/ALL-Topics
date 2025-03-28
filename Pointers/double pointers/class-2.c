// Online C compiler to run C program online
#include <stdio.h>

int main()
{

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int **ptr2 = &ptr;
    for (int i = 0; i < 5; i++)
    {
        printf("ptr = %d\n", (*ptr2 + i));
        printf("ptr2 = %d\n", *(*ptr2 + i));
    }

    return 0;
}
