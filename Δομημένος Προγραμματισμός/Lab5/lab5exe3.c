#include <stdio.h>
#include <stdlib.h>

int main()
{
    int capacity, overseer, classes, seatings;

    overseer = 0;
    seatings = 0;
    classes = 0;

    do
    {
        printf("Type the number of capacity\n");
        scanf("%d", &capacity);
        if (capacity < 16)
        {
            overseer = overseer + 1;
            seatings = seatings + capacity;
            classes++;
            printf("Required overseers: 1\n");
        }
        else if (capacity < 24)
        {
            overseer = overseer + 2;
            seatings = seatings + capacity;
            classes++;
            printf("Required overseers: 2\n");
        }
        else
        {
            overseer = overseer + 3;
            seatings = seatings + capacity;
            classes++;
            printf("Required overseers: 3\n");
        }

    } while (seatings <= 100);


    printf("Classes: %d\n", classes);
    printf("Seatings: %d\n", seatings);
    printf("Overseers: %d\n", overseer);

    return 0;
}
