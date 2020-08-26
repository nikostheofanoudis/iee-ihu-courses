#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gradeA, gradeB, gradeC, sumGrades, margin;
    double finalGrade;
    printf("Give grade A: ");
    scanf("%d", &gradeA);
    printf("Give grade B: ");
    scanf("%d", &gradeB);
    
    sumGrades = gradeA + gradeB;
    if (gradeA > gradeB)
    {
        margin = gradeA - gradeB;
        if (margin < 20)
        {
            finalGrade = (double)(sumGrades / 2) / 5;
        }
        else
        {
            printf("Give grade C: ");
            scanf("%d", &gradeC);
            finalGrade = (double)((sumGrades + gradeC) / 3) / 5;
        }
    }
    else if (gradeB > gradeA)
    {
        margin = gradeB - gradeA;
        if (margin < 20)
        {
            finalGrade = (double)(sumGrades / 2) / 5;
        }
        else
        {
            printf("Give grade C: ");
            scanf("%d", &gradeC);
            finalGrade = (double)((sumGrades + gradeC) / 3) / 5;
        }
    }
    else
    {
        finalGrade = (double)(sumGrades / 2) / 5;
    }
    
    printf("Grade A = %d, Grade B = %d, Grade C = %d\n", gradeA, gradeB, gradeC);
    printf("Final Grade = %lf\n", finalGrade);
    
    return 0;
}
