#include <stdio.h>

int main()
{
    // profit or loss
    int buycost;
    printf("Enter buying price:-  ");
    scanf("%d", &buycost);

    int sellcost;
    printf("Enter selling price:-  ");
    scanf("%d", &sellcost);

    if (sellcost > buycost || sellcost == buycost)
    {
        printf("Either profit or no loss");
    }
    else
    {
        printf("Loss");
    }
    
    return 0;
}