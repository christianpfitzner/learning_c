/**************************************************************
* do_while_read_from_user.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-11-13
***************************************************************
* Dieses Programm gibt Ihnen aus, ob es sich um ein
* Schaltjahr handelt
*
* Siehe Folie 80 im Skript
**************************************************************/

#include <stdio.h>          // include for printf and scanf
#include <stdbool.h>        // include for bool


int main(void)
{
    // Deklaration und Initialisierung von Variablen
    bool korrekte_eingabe = false;      // Variable zum Speichern der korrekten Eingabe
    char rechenzeichen;                 // Variable zum Speichern der Eingabe

    // Abfrage der Eingabe in einer do-while-Schleife ermöglicht eine Korrektur
    // falls das Rechenzeichen falsch eingegeben wurde.
    do
    {
        // Abfrage fuer ein Rechenzeichen
        printf("Geben Sie ein gueltiges Rechenzeichen ein: \n");
        // fflush ist hier notwendig, falls die Schleife nochmal durchlaufen wird
        fflush(stdin);
        scanf("%c", &rechenzeichen);

        // boolesche Verkettung zur Ueberpruefung des Rechenzeichens
        korrekte_eingabe = (rechenzeichen == '+') || (rechenzeichen == '-') ||
                           (rechenzeichen == '*') || (rechenzeichen == '/');

        // Ausgabe an den Nutzer, dass die Eingabe nicht korrekt war
        if( !korrekte_eingabe)
        {
            printf("Das war kein gueltiges Rechenzeichen. \n");
        }

    } while( !korrekte_eingabe );


    // Ausgabe ueber Erfolg
    printf("Ihre Eingabe war korrekt! \n");

    // Beenden des Programs
    return 0;
}
