


#include <stdio.h>



double laenge(int v[3])
{
    return sqrt(v[0] * v[0] +
                v[1] * v[1] +
                v[2] * v[2]);
}

int main(void)
{
    int vektor[3] = {1, 2, 3};
    printf("Länge: %g", laenge(vektor));
    return 0;
}
