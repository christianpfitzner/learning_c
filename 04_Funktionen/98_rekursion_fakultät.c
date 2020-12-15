
/**************************************************************
* 98_rekursion_fakultät.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-11-24
***************************************************************
* Wir verwenden hier den Datentypen Long long unsigned integer
* Dieser hat folgenden Wertebereich
* [0, +18,446,744,073,709,551,615]
*
*
* Folie 98
**************************************************************/





// Funktion zur Berechnung der Fakultät mittels einer Schleife
unsigned long long int fakultaet_iterativ(unsigned long long int n)
{
    unsigned long long int produkt = 1;
    for (unsigned int i=2 ; i<=n ; i++)
    {
        produkt = produkt * i;
    }

    return produkt;
}


// Funktion zur Berechnung der Fakultät mittels Rekursion
unsigned long long int fakultaet_rekursion(unsigned long long int n)
{
    if(n == 0)                                              // wenn n den Wert 0 hat, dann gibt 1 zurueck
    {
        return 1;
    }
    else                                                    // ansonsten gebe n * fakultät_rekursion(n-1) zurück
    {
        return (n * fakultaet_rekursion(n - 1));
    }
}





int main(void)
{
    unsigned int input_nr = 0;

    printf("Dieses Programm berechnet die Fakultät zu einer Zahl\n");

    printf("Geben Sie eine Ganzzahl ein: ");
    scanf("%d", &input_nr);


    // iterative Berechnung der Fakultät
    printf("*** Iterative Berechnung ***\n");
    printf("Die Fakultaet von %d ist %lld\n\n", input_nr, fakultaet_iterativ(input_nr));

    printf("*** Rekursive Berechnung ***\n");
    printf("Die Fakultaet von %d ist %lld\n\n", input_nr, fakultaet_rekursion(input_nr));



    return 0;
}



