#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weight, destination;
    double charge;
    printf("Give the weight of the package in grams: ");
    scanf("%d", &weight);
    printf("You entered: %d grams\n", weight);

    printf("Give the preffered number of destination (0: Inside the country, 1: Abroad): ");
    scanf("%d", &destination);
    if (destination == 0)
    {
        if (weight <= 500)
        {
            charge = 2.0;
        }
        else if (weight <= 1000)
        {
            charge = 3.5;
        }
        else
        {
            charge = 4.6;
        }

        printf("Charge: %lf\n", charge);
    }
    else if (destination == 1)
    {
        if (weight <= 500)
        {
            charge = 4.8;
        }
        else if (weight <= 1000)
        {
            charge = 7.2;
        }
        else
        {
            charge = 11.5;
        }

        printf("Charge: %lf\n", charge);
    }
    else
    {
        printf("You gave a wrong destination\n");
    }
    
    return 0;
}
