

/**************************************************************
* 101_rekursion_teiler.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-11-24
***************************************************************
* Berechnung des gemeinsamen Teilers
*
* Folie 101
**************************************************************/






#include <stdio.h>
int ggt(int a, int b)
{ // größter gemeinsamer Teiler
    if (b == 0)
    {
        return a;
    }

    return ggt(b, a % b);
}


int main(void)
{
    int a = 0, b = 0;
    do
    {
        // Abfrage der Zahlen
        printf("a: ");
        scanf("%d", &a);

        printf("b: ");
        scanf("%d", &b);

        printf("ggt(%d, %d) = %d\n\n", a, b, ggt(a, b));
    } while (a != 0 && b != 0);
    return 0;
}
