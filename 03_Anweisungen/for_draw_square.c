/**************************************************************
* for_draw_square.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-11-13
***************************************************************
* Dieses Programm zeichnet Ihnen ein Quadrat im Ausgabefenster.
* Ein Nutzer kann die Größe angeben.
*
* Siehe Folie 80 im Skript
**************************************************************/

#include <stdio.h>          // include for printf and scanf
#include <stdbool.h>        // include for bool


int main(void)
{
    // Deklaration und Initialisierung von Variablen
    unsigned int groesse_quadrat = 0;


    // Abfrage der Quadratgroesse
    printf("Geben Sie eine Kantenlänge des Quadrats an (1 - 50): \n");
    scanf("%i", &groesse_quadrat);


    for(int i=0 ; i<groesse_quadrat ; i++)              // Erzeugen alle Zeilen
    {
        for(int j=0 ; j<groesse_quadrat ; j++)          // Erzeugen einer einzelnen Zeile
        {
            printf("*");
        }
        printf("\n");
    }

    // Beenden des Programs
    return 0;
}
