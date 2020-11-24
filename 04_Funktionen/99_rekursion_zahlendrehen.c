
/**************************************************************
* 99_rekursion_zahlendrehen.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-11-24
***************************************************************
* Dreht eine eingegebene Zahl um
*
* Folie 99
**************************************************************/





// Rekursive Funktion, welche eine Zahl in umgedrehter Reihenfolge ausgibt
void drucke_umgedreht(int zahl)
{

   if(zahl != 0)                            // Abbruch der Rekursion wenn die eingegebene Zahl gleich Null ist
    {
        printf("%d", zahl % 10);            // gibt die letzte Stelle einer Zahl aus
        drucke_umgedreht(zahl / 10);        // Schneidet die letzte Stelle ab -> integer division
    }

    return;
}



int main(void)
{
    int zahl = 0;
    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &zahl);

    printf("Die Zahl umgedreht ist ");
    drucke_umgedreht(zahl);



    return 0;
}
