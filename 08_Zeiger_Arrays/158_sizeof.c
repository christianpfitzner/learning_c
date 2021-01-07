/**************************************************************
* 158_sizeof.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-21
***************************************************************
* Vertiefen von Sizeof im Zusammenhang mit Zeiger-Arrays
*
* Siehe Folie 158 im Skript
**************************************************************/

#include <stdio.h>


int main(void)
{

    printf("%2u\n", sizeof (char) );
    printf("%2u\n", sizeof (short) );
    printf("%2u\n", sizeof (int) );
    printf("%2u\n", sizeof (long) );
    printf("%2u\n", sizeof (long long) );
    printf("%2u\n", sizeof (float) );
    printf("%2u\n", sizeof (double) );
    printf("%2u\n", sizeof (long double) );
    printf("%2u\n", sizeof (long double *));
    printf("%2u\n", sizeof (char *) );



    char c = 'A';
    printf("%5u\n", sizeof c );
    printf("%5u\n", sizeof "A");
    printf("%5u\n", sizeof 'A');

    int v[100];
    printf("%5u\n", sizeof v[0]);
    printf("%5u\n", sizeof v );

    double m[30][70];
    printf("%5u\n", sizeof m[0][0]);
    printf("%5u\n", sizeof m[0] );
    printf("%5u\n", sizeof m );

    return 0;
}
