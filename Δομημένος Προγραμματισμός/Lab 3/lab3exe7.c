#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, vehicleType, volume;
    double insuranceCost;
    printf("Give you age: ");
    scanf("%d", &age);
    
    if (age >= 18 )
    {
        printf("Give your Vehicle Type (0: motorcycle, 1: cars)\n");
        scanf("%d", &vehicleType);
        if (vehicleType == 0)
        {
            printf("Your vehicle is motorcycle\n");
            printf("Give your vehicle's volume: \n");
            scanf("%d", &volume);
            printf("Your vehicle's volume is: %d\n", volume);
            if (volume <= 125)
            {
                insuranceCost = 100;
            }
            else
            {
                insuranceCost = 140;
            }

            printf("Your Insurance Cost is: %lf", insuranceCost);
        }
        else if (vehicleType == 1)
        {
            printf("Your vehicle is car\n");
            printf("Give your vehicle's volume: \n");
            scanf("%d", &volume);
            printf("Your vehicle's volume is: %d\n", volume);
            if (volume <= 1400)
            {
                insuranceCost = 400;
            }
            else if (volume <= 1800)
            {
                insuranceCost = 500;
            }
            else
            {
                insuranceCost = 700;
            }

            printf("Your Insurance Cost is: %lf", insuranceCost);
        }
        else
        {
            printf("You gave a wrong type number\n");
        }
        
    }
    else
    {
        printf("You must be at least 18 years old\n");
    }

    return 0;
}
