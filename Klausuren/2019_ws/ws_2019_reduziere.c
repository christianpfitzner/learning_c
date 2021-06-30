#include <stdlib.h>
#include <stdio.h>




#define N 6
#define F 2 // N % F == 0



void reduziere(int in[N][N], double out[N/F][N/F])
{
    for (int zo = 0; zo < N/F; zo++)
    {
        for (int so = 0; so < N/F; so++)
        {
            double summe = 0;
            for (int zi = zo * F; zi < zo * F + F; zi++)
            {
                for (int si = so * F; si < so * F + F; si++)
                {
                    summe += in[zi][si];
                }
            }

            out[zo][so] = summe / (F * F);
            printf("%.2lf ", out[zo][so]);
        }
        printf("\n");
    }
}

int main(void)
{

    srand(time(NULL));

    int in[N][N];
    double out[N/F][N/F];

    for (int z = 0; z < N; z++)
    {
        for (int s = 0; s < N; s++)
        {
            in[z][s] = rand() % 9 + 1;
            printf("%d ", in[z][s]);
        }
        printf("\n");
    }

    reduziere(in, out);

    return 0;
}
