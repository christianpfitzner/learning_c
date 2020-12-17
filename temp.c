#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int availablefunctions(void)
{
    double a = 0;
    printf("Waehlen sie eine Funktion aus fuer die die ihre Nullstelle berechnet werden soll: \n");     // Auswahl der Funktion n durch Eingabe Scanf
    printf("1:  2x - 4 \n");            //Ausgabe der Funktionen zwischnen denen augew�hlt werden kann
    printf("2:  1/3 + 1/x \n");
    printf("3:  e^x - 2x - 3 \n");
    printf("4:  (x-2)^3 + 2 \n");
    printf("5:  sin(2x) \n");
    scanf ("%lf", &a);
    return a;                            // R�ckgabe des Wertes in die main-function

}

void nullstelle(double c,double d,double a)
{
                    //e = f(x) ,c = Anfangsvariable Intervall , d = Endvariable Intervall , fx1 = f(c) , fx2 = f(d) ; g = genauigkeit als Gleitkommazahl eingegeben
    double g;
    double x = 0;
    printf("Geben sie ein Intervall an indem die Nullstelle berechnet werden soll, wobei a < b sein muss: \n");           // Intervalleingabe
    scanf("%lf" , &c);
    scanf("%lf" , &d);
    printf("Geben sie eine Genauigkeit als Gleitkommazahl ein fuer die die Nullstelle berechnet werden soll : ");      // Genauigkeit als Gleitkommazahl
    scanf("%lf", &g);
    printf("Genauigkeit ist = %lf\n", g);
    printf("Intervall beginnt bei %lf und endet bei %lf\n",c,d);
    if (d < c)
    {
        printf("a muss groe�er als b sein !\n");
        return 0;
    }


    if (a == 1) // f�r die 1. Funktion ist a = 1
    {
    double anzit = 0; // Iterationsschritte
    x = (c + d) / 2 ; // bisektion Berechnung von x
    anzit++;
    double e = (2 * x) - 4;
    double fx1 = 2 * c - 4;
    double fx2 = 2 * d - 4;

    // Aussgaben nach Anfangsintervall
    if (fx1 == 0)
    {
        printf("Erfolgsanzeige : 1 ! Funktion hat eine Nullstelle bei %lf\n",c);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;

    }

    if (fx2 == 0)
    {
        printf("Erfolgsanzeige : 1 ! Funktion hat eine Nullstelle bei %lf\n",d);           // Hier wird �berpr�ft ob die Anfangswerte bereits nullstellen sind
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;

    }
     if (e == 0)
    {
        printf("Erfolgsanzeige : 1 ! Nullstelle ist bei x = %lf\n",x);
        printf("Iterationsschritte sind %lf\n",anzit);

        return 0;
    }

    if (fx1 * fx2 > 0 ) // f(c) * f(d) > 0 => keine nst. vorraussetzung f�r bisektionsverfahren
    {
        printf("Erfolgsanzeige : 0 ! Es gibt keine Nullstellen in diesem Intervall !\n");
        printf("Iterationsschritte sind %lf\n",anzit);

        return 0;
    }

    while (e != 0)
    {


        while (fabs(e) > g)                     // solange int Betrag der Funktion nicht kleiner 0 ist wird das Bisektionsverfahren weiter angewendet !
        {
        if (e > 0 && fx1 < 0 && fx2 > 0)        // linear steigender graph => Hier links und Rechtsseitige Annaeherung
        {
            d = x;                              // Anwendung Bisektionsverfahren => Intervall halbieren und je nach Bedingung c = x oder d = x
        }
        if (e < 0 && fx1 < 0 && fx2 >0)
        {
            c = x;
        }
        x = (c + d) / 2;
        e = 2 * x -4;
        anzit++;
        }
        if (fabs(e) <= g) // Wenn der Betrag von f(x) < der eingegebenen Gleitkommazahl ist kann n�herungsweise eine nullstelle ausgegeben werden
        {
            printf("Erfolgsanzeige : 1 ! Nullstelle liegt bei %lf\n",x);
            printf("Iterationsschritte = %lf\n", anzit);
            return 0;
        }
        }
        }


 if (a == 2) //f(x) = 2
    {

    if (d == 0) // x darf nicht = 0 werden sonst division durch 0 ! => nicht erlaubt => abbruch
    {
        printf("Durch Null dividieren ist nicht erlaubt ! \n");
        return 0;
    }
    double anzit = 0;                                               //Variablen und Funktionen Deklarieren
    double i = 0;
    x = (c + d) / 2 ;
    printf("%lf = x \n",x);
    double e =((1*x)/(3*x) + (1*3)/(x*3));                      // Br�che werden erweitert damit man sie addieren - subtrahieren kann
    double fx1 = ((1*c)/(3*c) + (1*3)/(c*3));
    double fx2 = ((1*d)/(3*d) + (1*3)/(d*3));

    if (fx1 == 0)                                                               // Anzeige ob eine der eingegebenen Werte bereits eine Nst ist
    {
        printf("Erfolgsanzeige : 1 ! Funktion hat eine Nullstelle bei %lf\n",c);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;

    }

    if (fx2 == 0)
    {
        printf("Erfolgsanzeige : 1 ! Funktion hat eine Nullstelle bei %lf\n",d);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;

    }

    if (e == 0)
    {
        printf("Erfolgsanzeige : 1 ! Nullstelle ist bei x = %lf\n",x);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;
    }
    if (fx1 * fx2 < 0 || c > -3) // Hier hat die Fkt keine Nullstelle => (Graphisch �berpr�ft und nun als Bedinung verwendet )
    {
        printf("Erfolgsanzeige : 0 ! Es gibt keine Nullstellen in diesem Intervall \n");
        printf("Iterationsschritte sind %lf\n",anzit);

        return 0;
    }
    if (fx1 * fx2 ) // Hier hat die Fkt keine Nullstelle => (Graphisch �berpr�ft und nun als Bedinung verwendet )
    {
        printf("Erfolgsanzeige : 0 ! Es gibt keine Nullstellen in diesem Intervall \n");
        return 0;
    }

    while (e != 0)
    {
     while (e != 0 && a == 2 && i != 40)
        {
            x = (c + d) / 2;
            fx1 = ((1*c)/(3*c) + (1*3)/(c*3));
            fx2 = ((1*d)/(3*d) + (1*3)/(d*3));
            e =((1*x)/(3*x) + (1*3)/(x*3));
            if (e == 0)

            {
                printf("Erfolgsanzeige : 1 ! Nullstelle = %lf\n",x);
                printf("Iterationsschritte sind %lf\n",anzit);
                return 0;

            }
        while (fabs(e) > g)                         //Solange Betrag von f(x) > 0 wird die Bisektion fortgef�hrt !
        {
        if (e > 0 && fx1 > 0 && c < 0 && x < 0)     // Anwendung Bisektionsverfahren => Intervall halbieren und je nach Bedingung c = x oder d = x
        {
            c = x;
        }
        if ((e < 0 && x < 0) || x > 0)
        {
            d = x;
        }
        if (e < 0 && fx2 > 0)
        {
            d = x;
        }
        x = (c + d) / 2;
        e =((1*x)/(3*x) + (1*3)/(x*3));
        anzit++;
        }
        if (fabs(e) <= g)                            // Bisektion wird unterbrochen und Nst. Herausgegeben
        {
            printf("Erfolgsanzeige : 1 ! Nullstelle liegt bei %lf\n",x);
            printf("Iterationsschritte sind %lf\n",anzit);

            return 0;
        }
        }
    }

}





    if (a == 3) // Eingegebene Fkt = 3
    {
    double anzit = 0;                               //Variablen und Funktionen Deklarieren
    printf(" c = %lf & d = %lf\n",c,d);
    x = (c + d) / 2 ;
    printf("%lf = x \n",x);
    double e = exp(x) - 2*x - 3;
    double fx1 = exp(c) - 2*c - 3;
    double fx2 = exp(d) - 2*d - 3;

    if (fx1 == 0)                           // �berpr�fen ob eine der Eingaben bereits eine Nullstelle ist
    {
        printf("Funktion hat eine Nullstelle bei %lf\n",c);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;
    }

    if (fx2 == 0)
    {
        printf("Erfolgsanzeige : 1 ! Funktion hat eine Nullstelle bei %lf\n",d);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;

    }
    if(e == 0)
    {
        printf("Erfolgsanzeige : 1 ! Funktion hat eine Nullstelle bei %lf\n",x);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;
    }
    if ((fx1 * fx2) > 0)
    {
        printf("Erfolgsanzeige : 0 ! Es gibt keine Nullstellen im Intervall ! \n ");
        printf("Iterationsschritte sind %lf\n",anzit);

        return 0;
    }

    while (e != 0)
    {
            if (e == 0)
            {
                printf("Erfolgsanzeige : 1 ! Nullstelle ist bei %lf",x);
                printf("Iterationsschritte sind %lf\n",anzit);
                return 0;

            }

        while (fabs(e) > g)                          // Anwendung Bisektionsverfahren => Intervall halbieren und je nach Bedingung c = x oder d = x
        {
        if (e > 0 && fx1 > 0 && fx2 < 0)             //linke Nullstelle berechnen
        {
            c = x;
        }
        if (e < 0 && fx1 > 0 && fx2 < 0)            // rechet Nullstelle berechnen
        {
            d = x;
        }
        if(e < 0 && fx1 < 0 && fx2 >0)              // linke Nullstelle von der anderen Seite
        {
            c = x;
        }
        if (e > 0 && fx2 > 0)                       // Rechte Nullstelle von der anderen Seite
        {
            d = x;
        }
        if (fx1 > 0 && fx2 > 0 && e < 0 || fx1 < 0 && fx2 > 0 && e < 0 )            // Wenn beide Nst im Intervall sind wird sich der rechten mit dem Bisektionsverfahren angen�hert !
        {
            c = x;
        }

        x = (c + d) / 2;
        e = exp(x) - 2*x - 3;
        anzit++;
        if (fabs(e) >= g && anzit == 40)  // Wenn keine Nst im Intervall ist
        {
            printf("Erfolgsanzeige 0 ! Keine Nullstelle Gefunden !\n");
            printf("Iterationsschritte sind %lf\n",anzit);

            return 0;
        }
        }
        if (fabs(e) <= g)                  // Wenn f(x) < g ist wird die Nullstelle n�herungsweise herausgegeben
        {

            printf("Erfolgsanzeige : 1 !Nullstelle liegt bei %lf\n",x);
            printf("Iterationsschritte sind %lf\n",anzit);
            return 0;
        }


        }
}


    if (a == 4)                 // Ausgew�hlte Funktion ist 4
    {
    double anzit = 0;
    x = (c + d) / 2 ;
    double e = pow((x-2),3) + 2;                    //Variablen und Funktionen Deklarieren
    double fx1 = pow((c-2),3) + 2;
    double fx2 = pow((d-2),3) + 2;
    if (fx1 == 0)                       // �berpr�fen ob eine der Eingegebenen Werte bereits eine Nullstelle ist
    {
        printf("Funktion hat eine Nullstelle bei %lf\n",c);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;
    }

    if (fx2 == 0)
    {
        printf("Funktion hat eine Nullstelle bei %lf\n",d);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;

    }
    if (fx1 * fx2 > 0)
    {
        printf("Erfolgsanzeige : 0 ! Es gibt keine Nullstellen im Intervall ! \n");
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;
    }

    if (e == 0)
    {
        printf("Nullstelle ist bei x = %lf\n",x);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;
    }

    while (e != 0)
    {
        while (fabs(e) > g)                                 // Bisektionsverfahren anwenden
        {
        if (e > 0 && fx1 < 0 && fx2 > 0)                    // Anwendung Bisektionsverfahren => Intervall halbieren und je nach Bedingung c = x oder d = x
        {
            d = x;
        }
        if (e < 0 && fx1 < 0 && fx2 >0)
        {
            c = x;
        }
            x = (c + d) / 2;
            e = pow((x-2),3) + 2;
            anzit++;
        if (fabs(e) >= g && anzit == 40)                            // keine Nullstelle im Intervall
        {
            printf("Erfolgsanzeige 0 ! Keine Nullstelle Gefunden !\n");
            printf("Iterationsschritte sind %lf\n",anzit);

            return 0;
        }
        if (fabs(e) <= g)
        {
            printf("Erfolgsanzeige : 1 ! Nullstelle liegt bei %lf\n",x);
            printf("Iterationsschritte sind %lf\n",anzit);
            return 0;
        }
    }
    }
}


    if (a == 5)                                         //Wenn die 5. Funktion ausgew�hlt wurde
    {
    double anzit = 0;
    x = (c + d) / 2 ;
    double e = sin(2*x);                                    //Variablen und Funktionen Deklarieren
    double fx1 = sin(2*c);
    double fx2 = sin(2*d);
    if (fx1 == 0)                                           // �berpr�fen pb eine der eingegebenen Zahlen eine Nullstelle ist
    {
        printf("Erfolgsanzeige : 1 ! Funktion hat eine Nullstelle bei %lf\n",c);
        printf("Iterationsschritte sind %lf\n",anzit);

        return 0;
    }

    if (fx2 == 0)
    {
        printf("Erfolgsanzeige : 1 ! Funktion hat eine Nullstelle bei %lf\n",d);
        printf("Iterationsschritte sind %lf\n",anzit);

        return 0;
    }

    if (e == 0)
    {
        printf("Erfolgsanzeige : 1 ! Nullstelle ist bei x = %lf\n",x);
        printf("Iterationsschritte sind %lf\n",anzit);

        return 0;
    }

    while (e != 0)
    {
            if (e == 0)
            {
                printf("Erfolgsanzeige : 1 ! Nullstelle ist bei %lf",x);
                printf("Iterationsschritte sind %lf\n",anzit);
                return 0;
            }
             if (fx1 == 0)
    {
        printf("Erfolgsanzeige : 1 ! Funktion hat eine Nullstelle bei %lf\n",c);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;

    }

    if (fx2 == 0)
    {
        printf("Erfolgsanzeige : 1 ! Funktion hat eine Nullstelle bei %lf\n",d);
        printf("Iterationsschritte sind %lf\n",anzit);
        return 0;
    }

            while (fabs(e) > g)

            {
                if ((fx1 * fx2) < 0 )       // Anwendung Bisektionsverfahren => Intervall halbieren und je nach Bedingung c = x oder d = x
            {
                c = x;
            }
                if ((fx1 * fx2) > 0 )
            {
                d = x;
            }

        x = (c + d) / 2;
        e = sin (2*x);
        anzit++;
        if (fabs(e) >= g && anzit == 40)
        {
            printf("Erfolgsanzeige 0 ! Keine Nullstelle Gefunden !\n");
            printf("Iterationsschritte sind %lf\n",anzit);
            return 0;
        }

        }
            if (fabs(e) <= g)
            {

                printf("Erfolgsanzeige : 1 ! Nullstelle liegt bei %lf \n",x);
                printf("Iterationsschritte sind %lf\n",anzit);
                return 0;
            }
        }
    }
}


int main()
{
    double a = availablefunctions();        // a aus available functions in main
    double c2 = 0;
    double d2 = 0;
    nullstelle(c2,d2,a);                    // Funktion Nullstelle() aufrufen
    return 0;
}
