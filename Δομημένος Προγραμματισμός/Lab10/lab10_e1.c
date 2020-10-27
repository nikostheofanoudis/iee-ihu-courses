#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ypallilos
{
    char name[50];
    int arithmos_mitroou;
    int eidos_ptyxiou;
    int ores_yperorias;
    double basikos_misthos;
};

ypallilos gemisma_pedion ( char name[], int arithmos_mitroou, int eidos_ptyxiou, int ores_yperorias, double basikos_misthos)
{
    struct ypallilos yp;
    strcpy(yp.name, name);
    yp.arithmos_mitroou = arithmos_mitroou;
    yp.eidos_ptyxiou = eidos_ptyxiou;
    yp.ores_yperorias = ores_yperorias;
    yp.basikos_misthos = basikos_misthos;
    return yp;
}

ypallilos emfanisi_pedion (ypallilos yp)
{
    printf("name : %s\arithmos_mitroou = %d\eidos_ptyxiou = %d\ores_yperorias = %d\basikos_misthos = %lf\", yp.name, yp.arithmos_mitroou, yp.eidos_ptyxiou, yp.ores_yperorias,yp.basikos_misthos);
}
int main()
{
    char name[50];
    int arithmos_mitroou, eidos_ptyxiou, ores_yperorias;
    double basikos_misthos;
    struct ypallilos yp1, yp2;
    //eisagogi dedomenon ypallilou 1
    printf("Give name : ");
    scanf("%s", name);
    printf("Give arithmos_mitroou : ");
    scanf("%d", arithmos_mitroou);
    printf("Give eidos_ptyxiou : ");
    scanf("%d", eidos_ptyxiou);
    printf("Give ores_yperorias : ");
    scanf("%d", ores_yperorias);
    printf("Give basikos_misthos : ");
    scanf("%lf", basikos_misthos);
	yp1 = gemisma_pedion(name, arithmos_mitroou, eidos_ptyxiou, ores_yperorias, basikos_misthos);

    system("pause");
}