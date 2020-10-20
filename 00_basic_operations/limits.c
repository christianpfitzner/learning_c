

/**************************************************************
* limits.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-10-20
***************************************************************
* Einlesen von Zahlen �ber die Funktion scanf
* Folie im Skript: 17
*************************************************************/



#include <stdio.h>
#include <limits.h>


int main(void)
{
    printf("Gr��e eines char ist %d Bits ", CHAR_BIT);
    printf("mit einem Wertebereich von %d bis %d \n", CHAR_MIN, CHAR_MAX);

    short s;
    printf("Gr��e eines short ist %d Bytes ", sizeof(s));
    printf("mit einem Wertebereich von %d bis %d \n", SHRT_MIN, SHRT_MAX);

    short i;
    printf("Gr��e eines int ist %d Bytes ", sizeof(i));
    printf("mit einem Wertebereich von %d bis %d \n", INT_MIN, INT_MAX);


    // Programmieren Sie die Ausgabe f�r die restlichen Standarddatentypen in C




    return 0;
}




