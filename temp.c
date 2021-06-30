#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Funktion um den Wert aus der ersten Spalte vor dem Komma auszulesen
const char *getfirst(char *arr, int num)
{
    const char *tok;
    for (tok = strtok(arr, ","); tok && *tok; tok = strtok(NULL, ",\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}
int main()
{
    //�ffnenen der CSV Datei
    FILE *myFile;
    myFile = fopen("sampledata.csv", "r");

    //Variableninitialisierung
    char arr[1001];
    double arrToBeSorted[1001];
    double arrNotToBeSorted[1001];
    int i, k, l, n, m, p, q, o;
    double x, y, s, h;
    int min_idx;
    double temporary;

    //Auslesen und Konvertieren der CSV Datei in ein Array
    for (i = 0; i <= 1000; i++)
    {
        fgets(arr, 1000, myFile);
        char *tmp = strdup(arr);
        printf("%s\n", getfirst(tmp, 1));
        arrToBeSorted[i] = atof(tmp);
        arrNotToBeSorted[i] = atof(tmp);
        free(tmp);
    }
    //Ausgabe der konvertierten Array
    for (k = 1; k <= 1000; k++)
    {
        printf("%f\n", arrNotToBeSorted[k]);
    }
    //Sortieren der Array
    for (n = 1; n <= 1000 - 1; n++)
    {
        min_idx = n;
        for (m = n + 1; m <= 1000; m++)
        {
            if (arrToBeSorted[m] < arrToBeSorted[min_idx])
                min_idx = m;

            temporary = arrToBeSorted[min_idx];
            arrToBeSorted[min_idx] = arrToBeSorted[n];
            arrToBeSorted[n] = temporary;
        }
    }

    //Berechnung und Ausgabe des Mittelwertes
    for (l = 1; l <= 1000; l++)
    {
        x = x + arrToBeSorted[l];
    }
    y = x / 1000;
    printf("%f mittelwert\n", y);

    //Berechnung und Ausgabe des Medians
    printf("%f median\n", (arrToBeSorted[500] + arrToBeSorted[501]) / 2);

    //Berechnung und Ausgabe der Standardabweichung
    for (q = 1; q <= 1000; q++)
    {
        s = s + ((arrToBeSorted[q] - y) * (arrToBeSorted[q] - y));
    }
    h = sqrt(s / (1000 - 1));
    printf("%f standardabweichung\n", h);

    //Ermittlung und Ausgabe des kleinsten und des gr��ten Wertes mit dazugeh�rigem Index
    for (o = 1; o <= 1000; o++)
    {
        if (arrNotToBeSorted[o] == arrToBeSorted[1])
        {
            printf("%d Das ist einer der Indizes von dem Minimalwert\n", o);
        }
        else if (arrNotToBeSorted[o] == arrToBeSorted[1000])
        {
            printf("%d Das ist einer der Indizes von dem Maximalwert\n", o);
        }
    }
}
