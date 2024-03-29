/**************************************************************
* 999_array_enum_coordinate.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-11
***************************************************************
*
*
**************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>



// alle werte aufsummieren und durch die Anzahl teilen
double mittelwert(int vec[], int n)
{
    int sum = 0;
    for(unsigned int i=0 ; i<n; i++)
    {
        sum += vec[i];
    }

    return (double)(sum) / n;
}


int main(void)
{
    int n=0;
    printf("Wie viele Zufallszahlen sollen angelegt werden?\n");
    scanf("%d", &n);

    int vec[n];
    for(unsigned int i=0 ; i<n ; i++)
    {
        vec[i] = rand();
        printf("%d\n", vec[i]);
    }

    printf("Der Mittelwert ist %lf", mittelwert(vec, n));

    return 0;
}
