


#include <stdio.h>


void zaehle(char c, int * const vokale, int* const buchstaben)
{
    ++*buchstaben;          // inkrementieren der Anzahl der Buchstaben

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
        c=='A' || c=='E' || c=='I' || c=='O' || c=='U' )
    {
        ++*vokale;          // inkrementieren der Anzahl der Vokale
    }
}


int main(void)
{
    char c;
    int vokale     = 0;
    int buchstaben = 0;
    printf("Text: ");

    do // Ausnutzen des Tastaturpuffers
    {
        scanf("%c", &c);
        zaehle(c, &vokale, &buchstaben);
    } while (c != '\n');

    printf("Der Text mit %d Buchstaben enthält %d Vokale.", buchstaben-1, vokale);
    return 0;
}
