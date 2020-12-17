#include <stdio.h>
#include <math.h>


float fct (int n,float xwert)
{
    float ergebnis = 0;
    switch (n)                                                      //Funktion wird ausgewählt
    {
    case 1:
    ergebnis = 2.0*xwert -4.0;                          break;
    case 2:
    ergebnis = (1.0/(xwert) +  1.0/3.0);                break;
    case 3:
    ergebnis = (exp(xwert)-2.0*xwert-3.0);              break;
    case 4:
    ergebnis = (pow(xwert-2.0, 3.0) + 2.0);             break;
    case 5:
    ergebnis = sin(2.0*xwert);                          break;
    default:
    return 0  ;
    }
    return ergebnis;                                                //Ergebnis für jeweiligen X-Wert wird zurück gegeben
}


void nullstelle(int n, float oben, float unten, float genau, int anzit, int erfolgsanzeige, float mitte,int *zaehler,int *oke, float *xnste)
{
    if(fct(n, oben)==0)                                 //Sonderfall: Wenn Intervallgrenze gleich Nullstelle ist
    {
        erfolgsanzeige = 1;
        *xnste = oben;
    }
    if(fct(n, unten)==0)
    {
        erfolgsanzeige = 1;
        *xnste = unten;
    }

    while ((fct(n, oben)*fct(n, unten))<0 && ((oben-unten)>2*genau))            //Bisektion: Prüfung, ob Nullstelle im Intervall und ob Intervall in der Genauigkeit liegt
    {
        erfolgsanzeige  = 1;
        mitte =(oben + unten)/2;                                                //Intervallmitte wird bestimmt

        if ((fct(n, mitte) * fct(n, unten))< 0)                                 //Prüfung, ob Nullstelle links oder rechts von der Mitte liegt
        {
            oben = mitte;
        }
        if ((fct(n, mitte) * fct(n, unten))> 0)
        {
            unten = mitte;
        }
        if ((fct(n, unten))== 0)
        {

            oben = unten;
        }
        if ((fct(n, oben))== 0)
        {
            unten = oben;
        }
        if ((fct(n, mitte))== 0)                                               //Sonderfall: Falls Intervallmitte die Nullstelle ist:
        {
            oben  = mitte;
            unten = mitte;
        }
        anzit++;                                                               //Zähler für Iterationsschritte
        *xnste         = ((unten + oben)/2);
    }



    *zaehler       = anzit;
    *oke           = erfolgsanzeige;
}




int main(void)
{
    int n                 = 0;              //Deklaration der Variablen
    float xwert           = 0;
    float ergebnis        = 0;
    float oben            = 0;
    float unten           = 0;
    float genau           = 0;
    float xnste           = 0;
    int   anzit           = 0;
    int zaehler           = 0;
    int erfolgsanzeige    = 0;
    float mitte           = 0;
    int oke               = 0;



    printf("Waehlen Sie eine Funktion aus\n");                  //Aufforderung bzw Eingabe für Benutzer
    scanf("%d", &n);
    printf("X-Wert\n ");
    scanf("%f", &xwert);
    printf("Obere Grenze, Untere Grenze, Genauigkeit:\n");
    scanf("%f%f%f", &oben, &unten, &genau);

    ergebnis = fct(n, xwert);                                                       //Funktion wird aufgerufen und Ergebnis wird angezeigt
    {
        printf("\n\nY an der Stelle %f hat den Wert: %f\n\n",xwert, ergebnis);
    }


    {
        nullstelle(n, oben, unten, genau, anzit, erfolgsanzeige, mitte, &zaehler, &oke, &xnste );               //Nullstellenfunktion wird durchgeführt und Ergebnis wird gezeigt
        printf("Nullstelle vorhanden: %d\n", oke);
        printf("Anzahl der Iterationsschritte : %d\n", zaehler);
        printf("Die Nullstelle der %d. Funktion liegt bei %f mit Abweichung von %f\n", n, xnste, genau);

    }
    return 0;
}
