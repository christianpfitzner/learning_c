/**************************************************************
* 999_enum_weekday.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2020-12-11
***************************************************************
*
*
**************************************************************/


#include <stdio.h>

enum Week
{
    Montag,     // festlegung des Elements auf 1
    Dienstag,       //   daher starten die nachfolgenden Enum-Elemente
    Mittwoch,       //   auch mit +1
    Donnerstag,
    Freitag,
    Samstag,
    Sonntag,
};


int main(void)
{
    enum Week today;
    today = Mittwoch;
    printf("Heute ist der %d. Wochentag", today);
    return 0;
}
