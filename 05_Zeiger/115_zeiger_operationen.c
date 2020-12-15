

#include <stdio.h>


int main(void)
{
    int a = 42;
    int *ap = &a;

//    printf("ap zeigt auf die Adresse %p mit dem Wert %d\n", ap, *ap);
//
//
//    (*ap)++; // inkrementieren des Wertes der Variable a. Achtung: Klammern müssen gesetzt werden
//    printf("ap zeigt auf die Adresse %p mit dem Wert %d\n", ap, *ap); // 43
//
//
//    (*ap++); // inkrementieren des Adresswertes
//    printf("ap zeigt auf die Adresse %p mit dem Wert %d\n", ap, *ap);
//
//    (*ap++); // inkrementieren des Adresswertes
//    printf("ap zeigt auf die Adresse %p mit dem Wert %d\n", ap, *ap);



    // pointer on pointer on pointer
    int *p1, *p2, *p3;
    p1 = &a;

    printf("p1 zeigt auf die Adresse %p mit dem Wert %d\n", p1, *p1);

    // p2 zeigt auf p1, welcher auf die Variable a zeigt
    p2 = p1;
    printf("p2 zeigt auf die Adresse %p mit dem Wert %d\n", p2, *p2);

    // p3 zeigt auf p2, welcher auf die Adresse von p1 zeigt, welcher auf die Variable a zeigt
    p3 = p2;
    printf("p3 zeigt auf die Adresse %p mit dem Wert %d\n", p3, *p3);


    return 0;
}
