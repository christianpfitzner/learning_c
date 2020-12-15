
#include <stdio.h>


void drucke(int a[])
{
    for (int i = 0; a[i] != -1; i++)
        printf("%d ", a[i]++);

    printf("\n");
}


int main(void)
{
    int a[] = {1, 2, 3, 4, 5, -1};
    drucke(a);
    drucke(a);
    return 0;
}
