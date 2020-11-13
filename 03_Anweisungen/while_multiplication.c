/**************************************************************
* while_multiplication.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-11-13
***************************************************************
* Dieses Programm zeigt die unterschiedliche Funktion von
* while-Schleifen (while und do-while).
*
* Siehe Folie 80 im Skript
**************************************************************/

#include <stdio.h>          // include for printf and scanf


int main(void)
{
    int x = 1;

    printf("The first loop is based on while\n");
    while (x < 10)
    {
        printf("%2d * %2d = %3d\n", x, x, x * x);
        ++x;
    }

    printf("********\n");

    // wiederholung der Schleife mit gleicher Bedingung:
    // die folgende Schleife wird jedoch nie ausgeführt, da
    // die Bedingung nicht erfüllt ist.
    while (x < 10)
    {
        printf("%2d * %2d = %3d\n", x, x, x * x);
        ++x;
    }


    printf("********\n");
    printf("The first loop is based on while\n");
    x = 1;      // reset of counter variable
    do
    {
        printf("%2d * %2d = %3d\n", x, x, x * x);
        ++x;
    }
    while( x <10);

    printf("********\n");

    // wiederholung der Schleife mit gleicher Bedingung:
    // die folgende Schleife wird einmal ausgeführt,
    // bevor die Bedingung überprüft wird
    do
    {
        printf("%2d * %2d = %3d\n", x, x, x * x);
        ++x;
    }
    while( x <10);





}
