#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    double n, power;
    printf("Type a number number between 2 and 10: \n");
    scanf("%d", &num);

    while (num < 2 || num > 10)
    {
        printf("Type a number number between 2 and 10: \n");
        scanf("%d", &num);
    }

    printf("Your number: %d\n", num);

    n = 1;
    power = pow(num, n);
    printf("The power of %lf in %d is: %lf\n", n, num, power);
    
    while (power <= 100)
    {
        n++;
        power = pow(num, n);
        printf("The power of %lf in %d is: %lf\n", n, num, power);
    }
    
    return 0;
}
