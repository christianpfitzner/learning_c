/**************************************************************
* 121_char_array.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-08
***************************************************************
*
* Siehe Folie 121 im Skript
**************************************************************/




#include <stdio.h>
#define MAX ('z' - 'a' + 1) // Anzahl der Buchstaben


int main(void)
{
    char alphabet[MAX];

    // Ausgabe aller Buchstaben mittels Schleife
    for (int i = 0; i < MAX; i++)
    {
        alphabet[i] = 'a' + i;
        printf("%c ", alphabet[i]);
    }

    return 0;
}

