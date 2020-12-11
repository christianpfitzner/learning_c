

#include <stdio.h>



int main(void)
{
    char thi[] = "FHI";         // Definition und Deklaration eines Strings mit der Größe 4
    *thi       = 'T';           // Zeiger auf den ersten Buchstaben des Strings
    printf("%s", thi);          // Ausgabe des Strings

    return 0;
}
