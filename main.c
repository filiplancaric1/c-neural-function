#include <ctype.h>
#include <stdio.h>
#include <math.h>

double f1(double cislo)
{

    if (cislo < 0)
    {
        return 0;
    }

    return 1;

}

double f2(double cislo)
{
    if (cislo <= 0)
    {
        return 0;
    }
    return cislo;
}

double f3(double cislo)
{
    return (cislo + sqrt(cislo*cislo + 2))/2;
}

double f4(double cislo)
{
    return exp(-(cislo*cislo));
}

double f5(double cislo)
{
    return (exp(cislo) - exp(-cislo))/(exp(cislo) + exp(-cislo));
}

double f6(double cislo)
{
    return cislo/(1 + exp(-0.5*cislo));
}

void automaticky_vypis(double x_start, double x_stop, double step, int precision, int width)
{
    for (int i = 0; i <= 6; i++)
    {
        if (i == 0)
        {
            printf("%*c", width, 'x');
        }

        else if (i == 6)
        {
            printf("%*d\n", width, i);
        }

        else
        {
            printf("%*d", width, i);
        }

    }

    for (double cislo = x_start; cislo <= x_stop; cislo+=step)
    {
        printf("%*.*lf", width, precision, cislo);
        printf("%*.*lf", width, precision, f1(cislo));
        printf(" %*.*lf", width-1, precision, f2(cislo));
        printf(" %*.*lf", width-1, precision, f3(cislo));
        printf(" %*.*lf", width-1, precision, f4(cislo));
        printf(" %*.*lf", width-1, precision, f5(cislo));
        if (cislo + step > x_stop) {
            printf(" %*.*lf", width-1, precision, f6(cislo));
        }

        else {
            printf(" %*.*lf\n", width-1, precision, f6(cislo));
        }

    }
}

void manual(double x_start, double x_stop, double step, int precision, int width, int vybrane_funkcie[], int pocet_vybranych_funkcii) {
    printf("%*.*c", width, precision, 'x');
    for (double j = x_start; j <= x_stop; j+=step) {
        printf("%*.*lf", width, precision, j);
    }

    for (int i = 0; i < pocet_vybranych_funkcii; i++) {
        printf("\n");
        printf("%*.d", width, vybrane_funkcie[i]);

        for (double k = x_start; k <= x_stop; k+=step) {
            if (vybrane_funkcie[i] == 1) {
                printf("%*.*lf", width, precision, f1(k));
            }
            else if (vybrane_funkcie[i] == 2) {
                printf("%*.*lf", width, precision, f2(k));
            }
            else if (vybrane_funkcie[i] == 3) {
                printf("%*.*lf", width, precision, f3(k));
            }
            else if (vybrane_funkcie[i] == 4) {
                printf("%*.*lf", width, precision, f4(k));
            }
            else if (vybrane_funkcie[i] == 5) {
                printf("%*.*lf", width, precision, f5(k));
            }
            else if (vybrane_funkcie[i] == 6) {
                printf("%*.*lf", width, precision, f6(k));
            }
        }
    }
}

int main()
{
    double x_start, x_stop, step;
    int precision, width;

    double double_vstup;
    int int_vstup;
    int pocitadlo = 0;
    int uspesne_prebehnutie = 0;
    int vybrane_funkcie[1024];
    int pocet_vybranych_funkcii = 0;
    int zapnutie_manualu = 0;

    while ((scanf("%lf", &double_vstup) == 1)){
        if (pocitadlo == 0) {
            x_start = double_vstup;
        }
        else if (pocitadlo == 1) {
            x_stop = double_vstup;
        }
        else if (pocitadlo == 2) {
            step = double_vstup;
            uspesne_prebehnutie = 1;
            break;
        }

        pocitadlo++;
    }

    if (uspesne_prebehnutie == 1){
        uspesne_prebehnutie = 0;
        while (scanf("%d", &int_vstup)) {
            if (pocitadlo == 2) {
                precision = int_vstup;
            }

            else if (pocitadlo == 3) {
                width = int_vstup;
                uspesne_prebehnutie = 1;
            }

            else {
                if (int_vstup >= 1 && int_vstup <= 6) {
                    vybrane_funkcie[pocet_vybranych_funkcii] = int_vstup;
                    pocet_vybranych_funkcii++;
                }

                zapnutie_manualu = 1;
            }

            pocitadlo++;
        }
    }

    if (uspesne_prebehnutie == 0) {
        printf("E1");
        return 0;
    }

    if (x_start >= x_stop) {
        printf("E2");
        return 0;
    }

    if (pocet_vybranych_funkcii == 0 && zapnutie_manualu == 0) {
        automaticky_vypis(x_start, x_stop, step, precision, width);
        return 0;
    }

    if (pocet_vybranych_funkcii && zapnutie_manualu == 1)
    {
        manual(x_start, x_stop, step, precision, width, vybrane_funkcie, pocet_vybranych_funkcii);
    }

    char ukoncovaci_znak;
    printf("\nPre ukoncenie stlac lubovolny symbol: ");
    scanf("%c", &ukoncovaci_znak);
    return 0;
}