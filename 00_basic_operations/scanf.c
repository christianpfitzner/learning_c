

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
    char c; int i; long l; long ll; float f; double d;

    printf("Geben Sie eine Ganzzahl ein: ");
    scanf("%d" ,  &i );     // liest int dezimal ein
    printf("Ihre Eingabe war %d \n", i);


    printf("Geben Sie eine Dezimal, Oktal, oder Hexzahl ein: ");
    scanf("%i" ,  &i );     // liest int dezimal, oktal oder hexadezimal ein
    printf("Ihre Eingabe war %i  \n", i);


    scanf("%ld" , &l );     // liest long dezimal ein
    scanf("%lld", &ll);     // liest long long dezimal ein
    scanf("%f" ,  &f );     // liest float ein (!)
    scanf("%lf" , &d );     // liest double ein
    scanf("%c" ,  &c );     // liest char ein

    return 0;
}




