


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


    for (int i = 0; name[i] != NULL; i++)
    {
        printf( "%s(%g) = %g\n", name[i], x, funktion[i](x));
    }


    return 0;
}
