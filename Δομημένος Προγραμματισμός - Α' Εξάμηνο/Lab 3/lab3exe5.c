#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary;
    double unisefFee, sosFee, finalSalary;
    printf("Give the amount of your salary: \n");
    scanf("%d", &salary);
    printf("Your salary is: %d\n", salary);

    if (salary <= 800)
    {
        unisefFee = (salary * 4) / 100 ;
        sosFee = (salary * 5) / 100 ;
    }
    else if (salary <= 1200)
    {
        unisefFee = (salary * 6) / 100 ;
        sosFee = (salary * 7.5) / 100 ;
    }
    else if (salary <= 2000)
    {
        unisefFee = (salary * 8) / 100 ;
        sosFee = (salary * 9.5) / 100 ;
    }
    else
    {
        unisefFee = (salary * 11) / 100 ;
        sosFee = (salary * 12) / 100 ;
        
    }
    
    finalSalary = salary - unisefFee - sosFee;
    printf("Final Salary is: %lf\n", finalSalary);
    printf("Unisef Fee is: %lf\n", unisefFee);
    printf("SOS Fee is: %lf\n", sosFee);
    return 0;
}
