#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kwt;
    double finalCost, kwtCost;

    printf("Type the amount of kwt: ");
    scanf("%d", &kwt);

    if (kwt <= 200)
    {
        kwtCost = kwt * 0.2;
    }
    else if (kwt <= 1000)
    {
        kwtCost = 200 * 0.20 + (kwt - 200) * 0.35;
    }
    else
    {
        kwtCost = 200 * 0.20 + 800 * 0.35 + (kwt - 1000) * 0.5;
    }
    
    finalCost = kwtCost + 15;
    printf("Final Cost: %lf", finalCost);

    return 0;
}
