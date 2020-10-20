/**************************************************************
* printf_examples.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-10-20
***************************************************************
* Dieses Programm zeigt Ihn gängige Ausgaben der Funktion
* printf.
* Folie im Skript: 42
**************************************************************/


#include <stdio.h>


int main(void)
{
    printf("%d\n" , 4711);      // Dezimalzahl
    printf("%i\n" , 4711);      // Dezimalzahl
    printf("%o\n" , 4711);      // Oktalzahl
    printf("%#o\n", 4711);      // Oktalzahl mit führender 0
    printf("%d\n" , 04711);
    printf("%d\n" , 0x4711);
    printf("%d\n" , 'Ä');       // signed
    printf("%u\n" , 'Ä');       // unsigned
    printf("%x\n" , 45054);     // Hexadezimalzahl
    printf("%X\n" , 45054);     // HEXADEZIMALZAHL
    printf("%#x\n", 45054);     // 0x....
    printf("%#X\n", 45054);     // 0X....



    return 0;
}
