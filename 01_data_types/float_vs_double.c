/*---------------------------------------------------------------------
* Technische Hochschule Ingolstadt
* Fakultät Elektrotechnik und Informatik - Studiengang EMB
*----------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

#define _USE_MATH_DEFINES // for C
#include <math.h>


int main()
{
    double zylinder_r;                                                                                             //Deklaration des Radius für die Grundfläche des Zylinder
    double zylinder_h;                                                                                             //Deklaration meiner Zylinderhöhe

    printf("Die Grundflaeche meines Zylinders hat einen Radius von ");
    scanf("%lf", &zylinder_r);                                                                                     //Abfrage meines Radius

    printf("Die Hoehe meines Zylinders ist ");
    scanf("%lf", &zylinder_h);                                                                                     //Abfrage meiner Zylinder Höhe

    const double zylinder_grundflaeche        = zylinder_r*zylinder_r*M_PI;                                        //Deklaration der Zylindergrundfläche
    const double zylinder_grundflaeche_umfang = 2*zylinder_r*M_PI;                                                 //Deklaration des Zylindergrundflächenumfangs
    const double zylinder_oberflaeche         = 2*zylinder_grundflaeche + zylinder_grundflaeche_umfang*zylinder_h; //Deklaration der Zylindergrundfläche

    const float zylinder_grundflaeche_float = zylinder_grundflaeche;

    // Ausgabe eines float-Wertes mit einer Genauigkeit von 20 Nachkommastellen
    printf("Der Flächeninhalt meiner Grundflaeche ist %.20f m^2\n", zylinder_grundflaeche_float);                  //Ausgabe des Flächeninhalts der Zylindergrundfläche

    // Ausgabe eines double-Wertes mit einer Genauigkeit von 20 Nachkommastellen
    printf("Der Flächeninhalt meiner Grundflaeche ist %.20f m^2\n", zylinder_grundflaeche);                        //Ausgabe des Flächeninhalts der Zylindergrundfläche

    return 0;
}


