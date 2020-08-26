#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    double weight, height, bmi;
    printf("Give age: ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("Give weight in kg: ");
        scanf("%lf", &weight);
        printf("Give height in cm: ");
        scanf("%lf", &height);
        height = height / 100;
        printf("Age = %d, Weight = %lf kg, Height = %lf cm\n", age, weight, height);
        bmi = weight / (height * height);
        printf("Body mass index is: %lf\n", bmi);
        if (bmi < 18.5) 
        {
            printf("Underweight\n");
        }
        else if (bmi < 25)
        {
            printf("Normal Weight\n");
        }
        else if (bmi < 30)
        {
            printf("Overweight\n");
        }
        else
        {
            printf("Obese\n");
        }

    }
    else
    {
        printf("You are too young for Body Mass Index Calculation\n");
    }
    
    return 0;
}
