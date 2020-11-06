#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Kaptialrechnung
    int k, n, d, e;
    const double z = 2.0;


    printf("Geben Sie Ihr Kapital K an: \n");     scanf("%d", &k);
    printf("und die Anzahl der Jahre n ein: \n"); scanf("%d", &n);

    // Berechnung
    // printf("Kapital nach n Jahren bei 2%%: %d * (%d + %d / %d)^%d = %d \n", k, 1, z, 100, n, sizeof(k * pow((1 + z / 100),n));

    const double neuer_wert = k * pow((1 + z / 100.0),n);

    printf("[DEBUG]: %f\n", 1 + z / 100);
    printf("[DEBUG]: %f\n", z / 100);
    double division = z / 100;
    printf("[DEBUG]: %f\n", division );


    printf("[DEBUG]: %f\n", 1/7.0);



    printf("Ihr Kapital ist nach der Zeit %f EUR wert. \n", neuer_wert);

    return 0;
}
