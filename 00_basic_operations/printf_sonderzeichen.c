

/**************************************************************
* printf_sonderzeichen.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-10-20
***************************************************************
* Formatierung mittels Sonderzeichen in der printf-Funktion.
* Folie im Skript: 29
*************************************************************/



#include <stdio.h>


int main(void)
{

    printf("Ein Klingeln \a");
    printf("Backspace \b");
    printf("Seitenvorschug \f");
    printf("Neue Zeile \n kann hier so aussehen. ");
    printf("Carriage return \r sieht im Terminal so aus");
    printf("Horizontal \t tab kann Texte \t formatieren");
    printf("Vertikales tab \v");

    return 0;
}




