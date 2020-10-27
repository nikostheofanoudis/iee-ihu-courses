#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> 

//Functions Decleration
void fillArray(int array[], int n);
void showArray(int array[], int n);
int findPositionMax(int array[], int n, int maxPosition);
int findPositionMin(int array[], int n, int minPosition);
int countAVG(int array[], int n, int c);
int searchPosition(int array[], int n, int num);
void bubbleSort(int array[], int n);

int main()
{
    int n, maxPos, minPos, pos, num, counter, c;

    do
    {
        printf("Type a number bigger than 5: \n");
        scanf("%d", &n);
        if (n > 5)
        {
            printf("Continue\n");
        }
    } while (n < 6);
    //Fill and Show every array item
    int array[n];
    fillArray(array, n);
    showArray(array, n);
    //Find the position of the biggest number
    maxPos = 0;
    maxPos = findPositionMax(array, n, maxPos);
    printf("The max array element is: %d\n", array[maxPos]);
    printf("The position of the max array element is: %d\n", maxPos);
    //Find the position of the smallest number
    minPos = n + 1;
    minPos = findPositionMin(array, n, minPos);
    printf("The min array element is: %d\n", array[minPos]);
    printf("The position of the min array element is: %d\n", minPos);
    //find any element that's bigger than array's average
    counter = countAVG(array, n, c);
    printf("Number of elements bigger than array's average: %d\n", counter);
    //Find a number in the array
    printf("Type a number: \n");
    scanf("%d", &num);
    pos = searchPosition(array, n, num);
    if(pos == -1) 
        printf("%d does not exists in array.\n", num); 
    else
        printf("%d found in position: %d\n", num, pos); 

    bubbleSort(array, n);
    showArray(array, n); 

    return 0;
}

void fillArray(int array[], int n)
{
    int i;
    srand(time(0));
    for (i = 0; i < n; i++)
    {
        array[i] = (rand() % (10 - 1 + 1)) + 1;
    }
    printf("Array filled\n");
}

void showArray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

int findPositionMax(int array[], int n, int max)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (array[i] > array[max])
        {
            array[max] = array[i];
            max = i;
        }
    }
    
    return array[max], max;
}

int findPositionMin(int array[], int n, int min)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (array[i] < array[min])
        {
            array[min] = array[i];
            min = i;
        }
    }
    
    return array[min], min;
}

int countAVG(int array[], int n, int c)
{
    int i, sum = 0, avg = 0;
    
    for (i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    printf("Sum: %d\n", sum);
    printf("n: %d\n", n);
    avg = sum / n;
    printf("Average: %d\n", avg);
    
    for (i = 0; i < n; i++)
    {
        if (array[i] > avg)
        {
            c = c + 1;
        }
    }
    return c;
}

int searchPosition(int array[], int n, int num)
{
    int i, pos = -1; 
    for(i = 0; i< n; i++) 
    { 
        if(array[i] == num) 
        { 
            pos=i; 
            break; 
        } 
    } 
    return pos;
}

void bubbleSort(int array[], int n)
{
    for (int step = 0; step < n ; step++) {
        for (int i = 0; i < n - step; i++) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}