

/**************************************************************
* scanf.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-10-20
***************************************************************
* Einlesen von Zahlen über die Funktion scanf
* Folie im Skript: 49
**************************************************************/



#include <stdio.h>


int main(void)
{
    int int_var       = 0;
    float float_var   = 0.0f;
    double double_var = 0.0;

    printf("Geben Sie eine Integer-Ganzzahl ein: ");
    scanf("%d" ,  &int_var );
    printf("Ihre Eingabe war %d \n\m", int_var);

    printf("Geben Sie eine Float-Gleitkommazahl ein: ");
    scanf("%f" ,  &float_var);
    printf("Ihre Eingabe war %f \n\n", float_var);

    printf("Geben Sie eine Double-Gleitkommazahl ein: ");
    scanf("%f" ,  &double_var);
    printf("Ihre Eingabe war %lf \n\n", double_var);

    return 0;
}




