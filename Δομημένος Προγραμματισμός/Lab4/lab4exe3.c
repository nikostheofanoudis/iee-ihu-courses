#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberEstate;
    double income, minTaxFree, taxableIncome, equivalentTax;
    printf("Type your income: \n");
    scanf("%lf", &income);
    printf("Type the number of Estates: \n");
    scanf("%d", &numberEstate);

    switch (numberEstate)
    {
        case 0:
            minTaxFree = 12000;
            taxableIncome = income - minTaxFree;
            equivalentTax = (taxableIncome * 30) / 100;
            break;
        case 1:
            minTaxFree = 10000;
            taxableIncome = income - minTaxFree;
            equivalentTax = (taxableIncome * 30) / 100;
            break;
        case 2:
            minTaxFree = 8000;
            taxableIncome = income - minTaxFree;
            equivalentTax = (taxableIncome * 30) / 100;
            break;
        case 3:
            minTaxFree = 5000;
            taxableIncome = income - minTaxFree;
            equivalentTax = (taxableIncome * 30) / 100;
            break;
        default:
            minTaxFree = 0;
            taxableIncome = income - minTaxFree;
            equivalentTax = (taxableIncome * 30) / 100;
    }

    printf("Your non-taxable income is: %lf\n", minTaxFree);
    printf("Your taxable income is: %lf\n", taxableIncome);
    printf("Your Equivalent Tax is: %lf\n", equivalentTax);

    return 0;
}
