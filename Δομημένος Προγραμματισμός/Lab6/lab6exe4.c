#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int findFactorial(int n);
void isPrime();

int main()
{
    int i, n, number, factorial;
    
    do
    {
        printf("Enter a number to calculate its factorial\n");
        scanf("%d", &n);
    } while ((n <= 0) || (n >= 10));
    
    factorial = findFactorial(n);
    printf("%d factorial is: %d\n", n, factorial);

    isPrime();

    return 0; 
}

int findFactorial(int n)
{
    int i, npar = 1;
    if ((n == 0) || (n == 1))
    {
        npar = 1;
        return npar;
    }
    else
    {
        for (i = 2; i <= n; i++)
        npar = npar * i;
        return npar;
    }
}

void isPrime() 
{
    int i, number;
    bool protos;
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
        printf("1 is neither prime nor composite\n");
    }
    else 
    {
        if (protos == false)
            printf("%d is a prime number\n", number);
        else
            printf("%d is not a prime number\n", number);
    }
}



