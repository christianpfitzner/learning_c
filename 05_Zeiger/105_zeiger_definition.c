

#include <stdio.h>




int main(void)
{
    int value = 10;                                                                              // Deklaration einer int-Variable
    int *pointer;                                                                               // Deklaration eines Zeigers, der auf eine int-Variable zeigen kann.

    double d_value = 12.3;
    double *dpointer;
    dpointer = &d_value;
//
    printf("Die int-Variable hat die Adresse %p \n", &value  );                                 // Ausgabe der Adresse der Variable mit Hilfe des Addressoperators
    printf("Der int-Zeiger hat die Adresse %p \n",   pointer );                                 // Ausgabe der Zeiger-Adresse




    // Initialisierung des Pointers
    pointer = &value;

//    printf("Die int-Variable hat die Adresse %p \n", &value  );                                 // Ausgabe der Adresse der Variable mit Hilfe des Addressoperators
//    printf("Der int-Zeiger hat die Adresse %p \n",   pointer );
//    printf("Die int-Variable hat die Adresse %d \n",    value  );                                 // Ausgabe der Adresse der Variable mit Hilfe des Addressoperators
//    printf("Der int-Zeiger hat die Adresse %d   \n",   *pointer );


    // Ausgabe der Größe
    printf("Groesse der Adresse ist %d und Groesse der Variable ist %d\n",
                                        sizeof(&value), sizeof(value));                         // Größe der Variable
    printf("Groesse der Adresse ist %d und Groesse der Variable ist %d\n",
                                        sizeof(pointer), sizeof(*pointer));                     // Größe des Zeigers
    printf("Groesse der Adresse ist %d und Groesse der Variable ist %d\n",
                                        sizeof(&d_value), sizeof(d_value));
    printf("Groesse der Adresse ist %d und Groesse der Variable ist %d\n",
                                        sizeof(dpointer), sizeof(*dpointer));
//    for(unsigned int i=0 ; i<2 ; i++)
//    {
//        // Ausgabe von Wert und Adresse
//        printf("Die int-Variable hat die Adresse %p und den Wert %d\n", &value,   value);
//        printf("Der int-Zeiger hat die Adresse %p und den Wert %d\n",   pointer, *pointer);
//
//        value = 100;
//    }



    return 0;
}
