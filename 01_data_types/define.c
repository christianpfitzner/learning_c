
/**************************************************************
* define.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-11-03
***************************************************************
* Kennenlernen von Konstanten über Defines und Const
*
*
**************************************************************/

// include for printf
#include <stdio.h>


// definition of constants
#define NULLPUNKT -273                       // üblicherweise sollten Konstanten in Großbuchstaben benannt werden

// alternative und auch besser
const float NULLPUNKT_CONST_FLOAT = -273.15;



int main(void)
{
  // Deklaration von Variablen
  float temperature_in_celsius = 0.0;

  // Eingabe durch einen Nutzer
  printf("Programm zur Berechnung der Temperatur in Kelvin\n");
  printf("Temperatur in Grad Celsius: ");
  scanf("%f", &temperature_in_celsius);

  // Berechnung der Temperatur
  //const float temperature_in_kelvin = temperature_in_celsius - -273;
  const float temperature_in_kelvin = temperature_in_celsius - NULLPUNKT_CONST_FLOAT;

  // Ausgabe an den Nutzer
  printf("Die Temperatur in Kelvin ist %f", temperature_in_kelvin);

  return 0;
}
