#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, npar = 1;
 
    do
    {
        printf("Enter a number to calculate its factorial\n");
        scanf("%d", &n);
    } while ((n <= 0) || (n >= 10));

    switch (n)
    {
    case 0:
        npar = 1;
        break;
    case 1:
        npar = 1;
        break;
    default:
        for (i = 2; i <= n; i++)
            npar = npar * i;
        break;
    }
    
    printf("Factorial of %d = %d\n", n, npar);

    return 0; 
}
