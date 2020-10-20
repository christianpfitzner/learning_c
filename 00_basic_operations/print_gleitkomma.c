/**************************************************************
* printf_feldbreite.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-10-20
***************************************************************
* Zahlen können mit Printf mit führenden Leerzeichen
* formatiert werden. Hier ein Beispiel für Gleitkommazahlen.
* Folie im Skript: 43
**************************************************************/



#include <stdio.h>


int main(void)
{
    const double euler = 2.7182818284590452354;
    printf(" 2.7182818284590452354\n");
    printf("|----5----0----5----0-|\n");
    printf("|%21f|\n" , euler);
    printf("|%-21f|\n" , euler);
    printf("|%+-21f|\n" , euler);
    printf("|%021f|\n" , euler);
    printf("|% -21f|\n" , euler);
    printf("|%-21.4f|\n" , euler);
    printf("|%-21.19f|\n", euler);
    printf("|%21e|\n" , euler);
    printf("|%21.14E|\n" , euler);


    return 0;
}
