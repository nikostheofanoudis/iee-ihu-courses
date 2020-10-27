#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Give three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        if (b > c) 
        {
            printf("a = %d > b = %d > c = %d \n", a, b, c );
        }
        else
        {
            printf("a = %d > c = %d > b = %d \n", a, c, b );
        }
    }
    else if(b>a && b>c)
    {
        if (a > c)
        {
            printf("b = %d > a = %d > c = %d \n", b, a, c );
        }
        else
        {
            printf("b = %d > c = %d > a = %d \n", b, c, a );
        }
    }
    else if (c > a && c > b)
    {
        if (a > b)
        {
            printf("c = %d > a = %d > b = %d \n", c, a, b );
        }
        else
        {
            printf("c = %d > b = %d > a = %d \n", c, b, a );
        } 
        
    }
    else
    {
        printf("a = %d > c = %d > b = %d \n", a, c, b );
    }
    return 0;
}
