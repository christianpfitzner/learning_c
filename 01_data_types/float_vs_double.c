/*---------------------------------------------------------------------
* Technische Hochschule Ingolstadt
* Fakult�t Elektrotechnik und Informatik - Studiengang EMB
*----------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

#define _USE_MATH_DEFINES // for C
#include <math.h>


int main()
{
    double zylinder_r;                                                                                             //Deklaration des Radius f�r die Grundfl�che des Zylinder
    double zylinder_h;                                                                                             //Deklaration meiner Zylinderh�he

    printf("Die Grundflaeche meines Zylinders hat einen Radius von ");
    scanf("%lf", &zylinder_r);                                                                                     //Abfrage meines Radius

    printf("Die Hoehe meines Zylinders ist ");
    scanf("%lf", &zylinder_h);                                                                                     //Abfrage meiner Zylinder H�he

    const double zylinder_grundflaeche        = zylinder_r*zylinder_r*M_PI;                                        //Deklaration der Zylindergrundfl�che
    const double zylinder_grundflaeche_umfang = 2*zylinder_r*M_PI;                                                 //Deklaration des Zylindergrundfl�chenumfangs
    const double zylinder_oberflaeche         = 2*zylinder_grundflaeche + zylinder_grundflaeche_umfang*zylinder_h; //Deklaration der Zylindergrundfl�che

    const float zylinder_grundflaeche_float = zylinder_grundflaeche;

    // Ausgabe eines float-Wertes mit einer Genauigkeit von 20 Nachkommastellen
    printf("Der Fl�cheninhalt meiner Grundflaeche ist %.20f m^2\n", zylinder_grundflaeche_float);                  //Ausgabe des Fl�cheninhalts der Zylindergrundfl�che

    // Ausgabe eines double-Wertes mit einer Genauigkeit von 20 Nachkommastellen
    printf("Der Fl�cheninhalt meiner Grundflaeche ist %.20f m^2\n", zylinder_grundflaeche);                        //Ausgabe des Fl�cheninhalts der Zylindergrundfl�che

    return 0;
}


