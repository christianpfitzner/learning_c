

#include <stdio.h>




int main(void)
{
    int value = 0;                                                                              // Deklaration einer int-Variable
    int *pointer;                                                                               // Deklaration eines Zeigers, der auf eine int-Variable zeigen kann.



    printf("Die int-Variable hat die Adresse %p \n", &value  );                                 // Ausgabe der Adresse der Variable mit Hilfe des Addressoperators
    printf("Der int-Zeiger hat die Adresse %p \n",   pointer );                                 // Ausgabe der Zeiger-Adresse


    // Initialisierung des Pointers
    pointer = &value;


    // Ausgabe der Gr��e
    printf("Groesse der Adresse ist %d und Groesse der Variable ist %d\n",
                                        sizeof(&value), sizeof(value));                         // Gr��e der Variable
    printf("Groesse der Adresse ist %d und Groesse der Variable ist %d\n",
                                        sizeof(pointer), sizeof(*pointer));                     // Gr��e des Zeigers

    for(unsigned int i=0 ; i<2 ; i++)
    {
        // Ausgabe von Wert und Adresse
        printf("Die int-Variable hat die Adresse %p und den Wert %d\n", &value,   value);
        printf("Der int-Zeiger hat die Adresse %p und den Wert %d\n",   pointer, *pointer);

        value = 100;
    }



    return 0;
}
