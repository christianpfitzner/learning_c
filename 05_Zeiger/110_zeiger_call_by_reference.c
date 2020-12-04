

#include <stdio.h>




// Versuch die Variablen zu vertauschen
void swap1(int a, int b)
{
    printf("swap1: \n");

    printf("Vorher: a: %d, b: %d\n", a, b);
    int c = a;
    a = b;
    b = c;
    printf("Nachher: a: %d, b: %d \n", a, b);

    // Das Ergebnis kann nicht in die Main-Funktion zurückgegeben werden
}


// Vertauschen der Zeiger auf Variablen
void swap2(int *a, int *b)
{
    printf("swap2: \n");
    printf("Vorher: a: %d, b: %d\n", *a, *b);

    int c = *a;
    *a = *b; // kopiert
    *b = c;  // kopiert
    printf("Nachher: a: %d, b: %d \n", *a, *b);

}


int main(void)
{
    int x=4, y=7;
    printf("x: %d, y: %d\n\n", x, y);

    swap1( x, y);
    printf("x: %d, y: %d\n\n", x, y);

    swap2(&x, &y);
    printf("x: %d, y: %d\n" , x, y);


    return 0;
}
