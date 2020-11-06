/**************************************************************
* uebungsaufgabe_3_1_4.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-11-06
***************************************************************
* Dieses Programm zeigt ein einfaches Beispiel für selbst
* angelegte Header-Dateien.
**************************************************************/



#include <stdio.h>
// #include "bayern.h"
#include "berlin.h"

int main(void)
{
    printf("Das Wahlalter im Bundesland %s fuer Landtagswahlen ist auf %d festgelegt \n", BUNDESLAND, WAHLALTER);


    return 0;
}
