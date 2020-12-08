
/**************************************************************
* 123_array_length.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-08
***************************************************************
*
* Siehe Folie 123 im Skript
**************************************************************/

#include <stdio.h>

// Funktion zur Berechnung der Länge eines 3D-Vektors
double laenge(int v[3])
{
    return sqrt(v[0] * v[0] +
                v[1] * v[1] +
                v[2] * v[2]);
}

int main(void)
{
    // Deklaration und Initialisierung eines Vektors
    int vektor[3] = {1, 2, 3};
    printf("Länge: %g", laenge(vektor));
    return 0;
}
