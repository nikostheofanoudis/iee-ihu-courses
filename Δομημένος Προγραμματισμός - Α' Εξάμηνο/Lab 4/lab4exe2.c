#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Give a non negative number: \n");
    scanf("%d", &x);
    switch (x)
    {
    case 0:
        printf ("x = 0\n");
        break;
    case 1:
        printf("x = perittos\n");
        break;
    case 2:
        printf("x = artios\n"); 
        break;
    case 3:
        printf("x = perittos\n");
        break;
    case 4:
        printf("x = artios\n"); 
        break;
    case 5:
        printf("x = perittos\n");
        break;
    default:
        printf("x > 5\n"); 
    }
    
    return 0;
}
