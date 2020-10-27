#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Give three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
        if (b > c)
            printf("a = %d > b = %d > c = %d\n", a, b, c);
        else
        {
            if (a > c)
                printf("a = %d > c = %d > b = %d\n", a, c, b);
            else
            {
                printf("c = %d > a = %d > b = %d\n", c, a, b);
            }

        }
    else
    {
        if (a > c)
            printf("b = %d > a = %d > c = %d\n", b, a, c);
        else
        {
            if (b > c)
                printf("b = %d > c = %d > a = %d\n", b, c, a);
            else
            {
                printf("c = %d > b = %d > a = %d\n", c, b, a);
            }

        }
    }


    return 0;

}
