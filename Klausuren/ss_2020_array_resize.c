

#include <stdio.h>
#define N 7


void fuelle(unsigned  a[N][N]) {
    for (unsigned int d = 0; d < N/2; d++)
    {
        for (unsigned int z = d; z < N - d; z++)
        {
            a[z][d] = a[z][N - d - 1] = d + 1;
            for (unsigned int s = d + 1; s < N - d - 1; s++)
            {
                a[d][s] = a[N - d - 1][s] = d + 1;
            }
        }

    }
    if (N % 2 != 0)
    {
        a[N/2][N/2] = N/2 + 1;
    }
}


void drucke(unsigned  a[N][N])
{
    for (unsigned int z = 0; z < N; z++)
    {
        for (unsigned int s = 0; s < N; s++)
        {
            printf("%d ", a[z][s]);
        }
        printf("\n");
    }
}
int main(void)
{
    unsigned int a[N][N];
    fuelle(a);
    drucke(a);
}
