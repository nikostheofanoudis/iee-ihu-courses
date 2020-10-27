#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int i, n, npar = 1, number;
    bool protos;
    
    do
    {
        printf("Enter a number to calculate its factorial\n");
        scanf("%d", &n);
    } while ((n <= 0) || (n >= 10));

    if ((n == 0) || (n == 1))
    {
        npar = 1;
        printf("Factorial of %d = %d\n", n, npar);
    }
    else
    {
        for (i = 2; i <= n; i++)
        npar = npar * i;
        printf("Factorial of %d = %d\n", n, npar);
    }
    
    do
    {
        printf("Enter a number from 2 to 100\n");
        scanf("%d", &number);
        printf("Number: %d\n", number);
    } while ((number < 2) || (number > 100));

    for (i = 2; i <= number / 2; ++i) 
    {
        if (number % i == 0) 
        {
            protos = true;
            break;
        }
    }

    if (number == 1) 
    {
        printf("1 is neither prime nor composite.");
    }
    else 
    {
        if (protos == false)
            printf("%d is a prime number\n", number);
        else
            printf("%d is not a prime number\n", number);
    }

    return 0; 
}


