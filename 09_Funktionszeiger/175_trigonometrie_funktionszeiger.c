/**************************************************************
* 175_trigonometrie_funktionszeiger.c
***************************************************************
* author: Christian Pfitzner
* date: 2021-11-30
***************************************************************
* This program  demonstrates function pointers with to
* functions for min and max value
**************************************************************/


#include <stdio.h>
#include <math.h>

int main(void)
{
    char *name[]                 = {"sin", "cos", "tan", NULL};
    double (*funktion[])(double) = { sin ,  cos ,  tan , NULL};
    double x;

    // Eingabe eines Wertes durch einen Nutzer
    printf("x: ");
    scanf("%lf", &x);

    // output of all functions
    for (int i = 0; name[i] != NULL; i++)
    {
        printf( "%s(%g) = %g\n", name[i], x, funktion[i](x));
    }


    return 0;
}
