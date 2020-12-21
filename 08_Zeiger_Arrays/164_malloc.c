

#include <stdio.h>
#include <string.h>

int main(void)
{

    char name[80], *liste[1000];
    int i;

    // Einlesen von neuen Namen, solange bis ein Nutzer nur Enter drückt
    for (i = 0; ; i++)
    {
        printf("Name: "); fgets(name, sizeof name, stdin);

        if (strlen(name) <= 1)
            break;

        liste[i] = malloc(strlen(name) + 1);
        strcpy(liste[i], name);
    }

    liste[i] = NULL; // markiert das Listenende

    // Ausgabe der Liste im Terminal
    for (i = 0; liste[i] != NULL; i++)
    {
        printf("%s", liste[i]);
        free(liste[i]);
    }
}
