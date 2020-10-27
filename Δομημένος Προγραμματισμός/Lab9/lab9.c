#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define nmax 100

//Function Declaration
void fillArray(int a[][nmax], int n);
void showArrayMD(int a[][nmax], int n);
double findAVGLine(int a[][nmax], int n, double avgLine[]);
void showArrayODRow(double avgLine[], int n);
double findAVGCol(int a[][nmax], int n, double avgCol[]);
void showArrayODCol(double avgCol[], int n);
int findDSum(int a[][nmax], int n);

int main()
{
    int n;
    do
    {
        printf("Type a number bigger than 5\n");
        scanf("%d", &n);
        if (n > 5)
        {
            printf("Continue\n");
        }
        
    } while (n < 6);

    int a[n][nmax];
    fillArray(a, n);
    showArrayMD(a, n);
    double avgLine[n];
    findAVGLine(a, n, avgLine);
    printf("Avg per line: \n");
    showArrayODRow(avgLine, n);
    printf("\n");
    double avgCol[n];
    findAVGCol(a, n, avgCol);
    printf("Avg per column: \n");
    showArrayODCol(avgCol, n);
    findDSum(a, n);

    
    return 0;
}

void fillArray(int a[][nmax], int n)
{
    int i, j;
    srand(time(0));

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = rand()%(10 - 1) + 1;
        }
        
    }
    
}

void showArrayMD(int a[][nmax], int n)
{
    int i, j;
    srand(time(0));

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

}

double findAVGLine(int a[][nmax], int n, double avgLine[])
{
    int i, j, sum;
    double avg = 1;

    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
            
        }
        avg = sum / n;
        avgLine[i] = avg;
    }
    
    for (i = 0; i < n; i++)
    {
        return avgLine[i];
    }
    
}

void showArrayODRow(double avgLine[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Avg[%d]: %lf ", i, avgLine[i]);
    }
    
}

void showArrayODCol(double avgCol[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Avg[%d]: %lf ", i, avgCol[i]);
    }
    
}

double findAVGCol(int a[][nmax], int n, double avgCol[])
{
    int i, j, sum;
    double avg = 1;

    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum = sum + a[j][i];
            
        }
        avg = sum / n;
        avgCol[i] = avg;
    }
    
    for (i = 0; i < n; i++)
    {
        return avgCol[i];
    }
}

int findDSum(int a[][nmax], int n)
{
    int i, sum1, sum2;

    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + a[i][i];

    }

    printf("Sum1: %d\n", sum1);
}

