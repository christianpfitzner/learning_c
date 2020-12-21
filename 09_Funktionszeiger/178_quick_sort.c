


#include <stdio.h>
#include <stdlib.h>



int zahlenvergleich(const void *zahl1, const void *zahl2) {
    const int *p1 = zahl1; // Typumwandlung (void *) -> (int *)
    const int *p2 = zahl2;
    return *p1 - *p2;
}
int main(void)
{
    int zahlen[] = {42, 11, 5, 18, 13};
    int n = sizeof zahlen / sizeof (int);
    qsort(zahlen, n, sizeof (int), zahlenvergleich);
    for (int i = 0; i < n; i++) printf("%2d ", zahlen[i]);
    printf("\n");
    return 0;
}
