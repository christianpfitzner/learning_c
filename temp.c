//
/*---------------------------------------------------------------------
* Technische Hochschule Ingolstadt
* Fakultät Elektrotechnik und Informatik - Studiengang EMB
*----------------------------------------------------------------------
* Thema : ...
* Autor : Weidner Jonas
* Datum : Erstellungsdatum
*----------------------------------------------------------------------
* Modulbeschreibung:
* Hier beginnend
* ...
*/


#include <stdio.h>


int main(void)
{
    int zähler_1, nenner_1;
    int zähler_2, nenner_2;
    char r = 43; (void)(45), (void)(42), (void)47;

//einlesen der rationalen Zahlen und des Rechenzeichens

    printf("Geben Sie einen ganzzahligen Zähler ein: ");
    scanf("%d", &zähler_1);

    printf("Geben Sie einen ganzzahligen Nenner ein: ");
    scanf("%d", &nenner_1);


    printf("Geben Sie einen ganzzahligen Zähler ein: ");
    scanf("%d", &zähler_2);

    printf("Geben Sie einen ganzzahligen Nenner ein: ");
    scanf("%d", &nenner_2);


    if(nenner_1 == 0 || nenner_2 == 0)

    {
    printf("Durch 0 teilen ist nicht moeglich!\n");
    return 0;
    }


    printf("Bitte geben Sie ein Rechenzeichen ein:   ");
    fflush(stdin);
    scanf("%c", &r);

    //Addition

    if(r == 43)

    {
    float ergebnis_zähler = zähler_1 * nenner_2 + zähler_2 * nenner_1;
    float ergebnis_nenner = nenner_1 * nenner_2;
    float ergebnis = (float) ergebnis_zähler / (float) ergebnis_nenner;

    printf("Das Ergebnis ist: %f/%f\n", ergebnis_zähler, ergebnis_nenner);
    printf("Auf zwei Nachkommastellen lautet das Ergebnis: %.2f\n", ergebnis);
    }

    //Subtraktion

    else if (r == 45)

    {
    float ergebnis_zähler = zähler_1 * nenner_2 - zähler_2 * nenner_1;
    float ergebnis_nenner = nenner_1 * nenner_2;
    float ergebnis = (float) ergebnis_zähler / (float) ergebnis_nenner;

    printf("Das Ergebnis ist: %f/%f\n", ergebnis_zähler, ergebnis_nenner);
    printf("Auf zwei Nachkommastellen lautet das Ergebnis: %.2f\n", ergebnis);
    }

    //Multiplikation

    else if (r == 42)

    {
    float ergebnis_zähler = zähler_1 * zähler_2;
    float ergebnis_nenner = nenner_1 * nenner_2;
    float ergebnis = (float) ergebnis_zähler / (float) ergebnis_nenner;

    printf("Das Ergebnis ist: %f/%f\n", ergebnis_zähler, ergebnis_nenner);
    printf("Auf zwei Nachkommastellen lautet das Ergebnis: %.2f\n", ergebnis);
    }

    //Division
    else if (r == 47)

    {
    float ergebnis_zähler = zähler_1 * nenner_2;
    float ergebnis_nenner = nenner_1 * zähler_2;
    float ergebnis = (float) ergebnis_zähler / (float) ergebnis_nenner;

    printf("Das Ergebnis ist: %f/%f\n", ergebnis_zähler, ergebnis_nenner);
    printf("Auf zwei Nachkommastellen lautet das Ergebnis: %.2f\n", ergebnis);
    }



    return 0;
}
