#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, npar = 1;
    
    do
    {
        printf("Enter a number to calculate its factorial\n");
        scanf("%d", &n);
    } while ((n < 0) || (n > 10));

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

    return 0; 
}
