


#include <stdio.h>

//
//// Druckt ein einzelnes Zeichen in das Terminal
//// Input Parameter:
////     char         Einzelnes Ascii Zeichen, was ausgegeben wird
//void drucke(char);
//
//// Macht einen Ton in Windows
//void beep(void);
//
//// Funktion, welche die Zahl zwei zurückgibt
//int return_2(void);


void drucke(char c) { printf("%c", c); }

void beep (void)    { printf("\a"); }

int return_2(void)  { return 2; }











int main(void)
{
    drucke('@');
    beep (); // Die Klammern sind notwendig!
    printf("%d", return_2());
    return 0;
}










