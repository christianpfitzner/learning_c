

#include <stdio.h>


// Calculate the length of a 3D vector
// based on pythagoras
double laenge(const double *x, const double *y, const double *z)
{
    return sqrt(*x * *x + *y * *y + *z * *z);
}



// normalize a vector in 3D
// as input the adress of three variables is provided
void normiere(double *x, double *y, double *z)
{
    double l = laenge(x, y, z);

    *x /= l;
    *y /= l;
    *z /= l;
}


int main(void)
{
    // normiere Vektor (x,y,z) auf die Einheitslänge
    double x = 3, y = 4, z = -1;

    // Output to a user
    printf("The input vector is (%lf, %lf, %lf) \n", x, y, z);
    printf("The length of the vector is %g\n\n",     laenge(&x, &y, &z));

    // apply normalization
    normiere(&x, &y, &z);

    // output to the user
    printf("The output vector is (%lf, %lf, %lf) \n", x, y, z);
    printf("The length of the vector is %g\n\n" ,     laenge(&x, &y, &z));
    return 0;
}
