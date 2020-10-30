

/**************************************************************
* limits.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-10-20
***************************************************************
* Einlesen von Zahlen über die Funktion scanf
* Folie im Skript: 17
*************************************************************/



#include <stdio.h>
#include <limits.h>


int main(void)
{
    printf("Groesse eines char ist %d Bits ", CHAR_BIT);
    printf("mit einem Wertebereich von %d bis %d \n", CHAR_MIN, CHAR_MAX);

    short s;
    printf("Groesse eines short ist %d Bytes ", sizeof(s));
    printf("mit einem Wertebereich von %d bis %d \n", SHRT_MIN, SHRT_MAX);

    short i;
    printf("Groesse eines short ist %d Bytes ", sizeof(i));
    printf("mit einem Wertebereich von %d bis %d \n", SHRT_MIN, SHRT_MAX);

    int integer;
    printf("Groesse eines int ist %d Bytes ", sizeof(integer));
    printf("mit einem Wertebereich von %d bis %d \n", INT_MIN, INT_MAX);

    long long_var;
    printf("Groesse eines long ist %d Bytes ", sizeof(long_var));
    printf("mit einem Wertebereich von %d bis %d \n", LONG_MIN, LONG_MAX);



    // Programmieren Sie die Ausgabe für die restlichen Standarddatentypen in C




    return 0;
}




