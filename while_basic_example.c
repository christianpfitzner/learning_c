

#include <stdio.h>


// Aufgabe: Hello World soll 10 Mal ausgegeben werden.

int main(void)
{
    int a = 0;
    int b = 0;


    printf("Addition von zwei Zahlen (0 und 0 zum Abbruch): \n");
    do
    {
        printf("\n Zahl a: "); scanf("%d", &a);
        printf("\n Zahl b: "); scanf("%d", &b);

        printf("Summe = %d", a+b);

        if ((a == 0) && (b == 0))
            printf("Programm wird beendet!\n");

    }
    while (1);



    return 0;
}
