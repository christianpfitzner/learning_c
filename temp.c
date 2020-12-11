
#include <stdio.h>


double length(int *vec)
{
    //return (sqrt(*vec*(*vec) + *(vec+1)**(vec+1) + *(vec+2)**(vec+2)));
    return (vec[0]*vec[0] + vec[1]*vec[1] + vec[2]*vec[2]);
}


int main(void)
{
    int vec[3] = {};

    const double l = length(&vec[0]); // &vec[0]

    printf("Laenge des Vektors ist %lf", l);
    return 0;
}
