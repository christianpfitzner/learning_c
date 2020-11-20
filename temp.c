/*---------------------------------------------------------------------
* Technische Hochschule Ingolstadt
* Fakultät Elektrotechnik und Informatik - Studiengang EMB
*----------------------------------------------------------------------
* Thema ...
* Autor : Josef Schneider
* Datum : 30.10.2020
*----------------------------------------------------------------------
* Modulbeschreibung:
* Hier beginnend
* ...
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{

    double zaehler1, zaehler2, zaehler3, zaehler4;
    double nenner1, nenner2, nenner3, ergebnis;
    double ergebniszaehler, ergebnisnenner;
    char rechenzeichen;

    //Eingabe des Zählers im ersten Bruch
    printf ("Bitte Zaehler vom ersten Bruch eingeben:\n");
    scanf ("%lf", &zaehler1);

    //Eingabe des Nenners im ersten Bruch
    printf("Bitte Nenner vom ersten Bruch eingeben:\n");
    scanf ("%lf", &nenner1);
        {
            if (nenner1 == 0)                                       //Wenn der Nenner Null beträgt stoppt das Programm
                return 0;
        }

    //Eingabe des Zählers im zweiten Bruch
    printf ("Bitte Zaehler vom zweiten Bruch eingeben:\n");
    scanf ("%lf", &zaehler2);

    //Eingabe des Nenners im zweiten Bruch
    printf ("Bitte Nenner vom zweiten Bruch eingeben:\n");
    scanf ("%lf", &nenner2);
        {
            if (nenner2 == 0)                                        //Wenn der Nenner Null beträgt stoppt das Programm
                return 0;
        }


    //Rechenzeichen wählen
    printf ("Bitte Rechenzeichen waehlen:\n");
    getchar();
    scanf ("%c", &rechenzeichen);


    //Berechnung wenn die Zähler gleich sind
        {
            if (nenner1 == nenner2)
            {
                if (rechenzeichen == '+')
                {
                    zaehler3 = zaehler1 + zaehler2;

                    printf ("%lf|%lf + %lf|%lf = %lf|%lf\n", zaehler1, nenner1, zaehler2, nenner2, zaehler3, nenner1);
                    printf ("Gekuerzt ist der Bruch: %lf / %lf = %.2lf\n", zaehler3, nenner1, zaehler3 / nenner1);          //Ergebnis wird auf zwei Nachkommastellen gerundet
                    return 0;

                }
                else



                if (rechenzeichen == '-')
                {
                    zaehler3 = zaehler1 - zaehler2;

                    printf ("%lf|%lf - %lf|%lf = %lf|%lf\n", zaehler1, nenner1, zaehler2, nenner2, zaehler3, nenner1);
                    printf ("Gekuerzt ist der Bruch: %lf / %lf = %.2lf\n", zaehler3, nenner1, zaehler3 / nenner1);          //Ergebnis wird auf zwei Nachkommastellen gerundet
                    return 0;
                }

            }

        }


    //Berechnung wenn die Zähler ungleich sind
        {
            if (nenner1 != nenner2)
            {
                if (rechenzeichen == '+')
                {
                    zaehler3 = zaehler1 * nenner2;
                    zaehler4 = zaehler2 * nenner1;
                    ergebniszaehler = zaehler3 + zaehler4;
                    ergebnisnenner = nenner1 * nenner2;

                    printf ("%lf|%lf + %lf|%lf = %lf|%lf + %lf|%lf = %lf|%lf\n", zaehler1, nenner1, zaehler2, nenner2, zaehler3, ergebnisnenner, zaehler4, ergebnisnenner, ergebniszaehler, ergebnisnenner);
                    printf ("Gekuerzt ist der Bruch: %lf / %lf = %.2lf\n", ergebniszaehler, ergebnisnenner, ergebniszaehler / ergebnisnenner);
                    return 0;

                }
                else

                if (rechenzeichen == '-')
                {
                    zaehler3 = zaehler1 * nenner2;
                    zaehler4 = zaehler2 * nenner1;
                    ergebniszaehler = zaehler3 - zaehler4;
                    ergebnisnenner = nenner1 * nenner2;

                    printf ("%lf|%lf - %lf|%lf = %lf|%lf - %lf|%lf = %lf|%lf\n", zaehler1, nenner1, zaehler2, nenner2, zaehler3, ergebnisnenner, zaehler4, ergebnisnenner, ergebniszaehler, ergebnisnenner);
                    printf ("Gekuerzt ist der Bruch: %lf / %lf = %.2lf\n", ergebniszaehler, ergebnisnenner, ergebniszaehler / ergebnisnenner);
                    return 0;

                }
            }
        }


        //Berechnung wenn Rechenzeichen * oder / ist
            {
                if (rechenzeichen == '*')
                {
                    ergebniszaehler = zaehler1 * zaehler2;
                    ergebnisnenner = nenner1 * nenner2;

                    printf ("%lf|%lf * %lf|%lf = %lf|%lf\n", zaehler1, nenner1, zaehler2, nenner2, ergebniszaehler, ergebnisnenner);
                    printf ("Gekuerzt ist der Bruch: %lf / %lf = %.2lf\n", ergebniszaehler, ergebnisnenner, ergebniszaehler / ergebnisnenner);
                    return 0;

                }
                else



                if (rechenzeichen == '/')
                {
                    ergebniszaehler = zaehler1 * nenner2;
                    ergebnisnenner = nenner1 * zaehler2;

                        if (ergebnisnenner == 0)
                            {
                                return 0;
                            }

                    printf ("%lf|%lf / %lf|%lf = %lf|%lf\n", zaehler1, nenner1, zaehler2, nenner2, ergebniszaehler, ergebnisnenner);
                    printf ("Gekuerzt ist der Bruch: %lf / %lf = %.2lf\n", ergebniszaehler, ergebnisnenner, ergebniszaehler / ergebnisnenner);
                    return 0;

                }
            }








    return 0;
}
