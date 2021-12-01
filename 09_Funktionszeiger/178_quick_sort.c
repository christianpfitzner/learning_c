/**************************************************************
* 178_quick_sort.c
***************************************************************
* author: Christian Pfitzner
* date: 2021-11-30
***************************************************************
* This program demonstrates the plain qsort algorithm based
* on function pointers
**************************************************************/


#include <stdio.h>
#include <stdlib.h>         // include for qsort




int ascending(const void *zahl1, const void *zahl2)
{
    const int *p1 = zahl1; // Typumwandlung (void *) -> (int *)
    const int *p2 = zahl2; // Typumwandlung (void *) -> (int *)

    // returns a negative value if *p1 is smaller than *p2
//    return    *p1 - *p2;
    return *p2 <  *p1;
}

int descending(const void *zahl1, const void *zahl2)
{
    const int *p1 = zahl1; // Typumwandlung (void *) -> (int *)
    const int *p2 = zahl2; // Typumwandlung (void *) -> (int *)

    // returns a negative value if *p1 is smaller than *p2
//    return    *p1 - *p2;
    return *p2 >  *p1;
}

int main(void)
{
    int zahlen[] = {42, 11, 5, 18, 13};
    int n        = sizeof zahlen / sizeof (int);

    // q sort function from stdlib
    qsort(zahlen, n, sizeof (int), ascending);

    // output
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", zahlen[i]);
    }
    printf("\n");
    return 0;
}
