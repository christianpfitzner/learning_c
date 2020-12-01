//
//  main.c
//  Vorführ2
//
//  Created by Lukas Sauer on 26.11.20.
//
//Sehr geehrter Herr Pfitzner,
//ich würde Sie gerne bitten, kurz über mein Programm zu schauen. Vielen Dank und mit freundlichen Grüßen Lukas Sauer
// Semester 2X

#include <stdio.h>

// Wie bekomme ich das * weg?  Wann brauch ich <stdlib.h>?
//Primfaktorzerlegung im Zahlenbereich
int main (void)
{
    unsigned long int eingabe1=0.0, eingabe2=0.0, eingabehilf=0.0;
    int n=0, hilf=0, hilf2=0, eres=0;

    printf("positive ganzen Zahlbereich, mit Komma getrennt, eingeben:\n");
    eres=scanf("%ld, %ld",&eingabe1, &eingabe2);

    if (eingabe1>0 && eingabe2>= eingabe1 && eres==2)                       // Eingabe überprüfen
    {

        for (; eingabe1<=eingabe2; eingabe1++)                              //hochzählen von eingabe1 zu eingabe2
        {
            printf("%ld=", eingabe1);                                       // Ausgabe eingabe1= ...
            eingabehilf=eingabe1;

            for (n=2; n<=eingabehilf; n++)

            {
                hilf=eingabehilf%n;                                         //hochzählen von n
                hilf2=0;
                if (hilf==0)
                {


                    while (hilf2==0)                                        //alle Teiler von eingabe1 für n gesucht
                    {

                        eingabehilf=eingabehilf/n;
                        printf(" %d *", n);
                        hilf2=eingabehilf%n;

                    }
                }
                else
                {

                }
            }
            //Primzahlüberprüfung hier einfügen
            printf("\n");

        }
    }
    else
        printf("unglueltige Eingabe!\n");

    return 0;
}

/*
// Primfaktorzerlegung mit einer Zahl
int main (void)
{
    unsigned long int eingabe=0.0;
    int n=0, hilf=0, hilf2=0;

    printf("positive ganze Zahl eingeben:\n");
    scanf("%ld",&eingabe);

    if (eingabe>0)                                     // Eingabe auf negativen und 0 wert überprüfen
    {
        printf("%ld=", eingabe);                       // Ausgabe eingabe= ...

        for (n=2; n<=eingabe; n++)

        {
            hilf=eingabe%n;
            hilf2=0;
            if (hilf==0)
            {
                while (hilf2==0)
                {
                    eingabe=eingabe/n;
                    printf(" %d *", n);               // Ausgabe des Teilers n
                    hilf2=eingabe%n;

                }
            }
            else
            {

            }
        }

        printf("\n");
    }
    else
        printf("unglueltige Eingabe!\n");

    return 0;
}
*/
