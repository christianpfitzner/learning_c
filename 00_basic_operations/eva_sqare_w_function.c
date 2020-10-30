
/**************************************************************
* eva_square_w_function.c
***************************************************************
* author: Christian Pfitzner
* date: 2020-10-30
***************************************************************
* Berechnen der Wurzel einer Zahl, mit der Nutzung und Glieder-
* und von Funktionen
*
*
**************************************************************/




#include <stdio.h>
#include <math.h>


float eingabe(void)
{
  // einlesen einer Variablen
  float input_float = 0.0; ;
  printf("Dieses Programm berechnet die Wurzel einer Zahl\n");
  printf("Bitte geben Sie eine positive Gleitkommazahl ein: ");
  scanf("%f", &input_float);

  return input_float;
}

float verarbeitung(float eingabe_variable)
{
  return(sqrt(eingabe_variable));
}


void ausgabe(float root, float input_variable)
{
  // Ausgabe an den Benutzer
  printf("Die Quadratwurzel von %f ist %f", input_variable, root);
}



int main(void)
{

  const float input_float = eingabe();
  const float root        = verarbeitung(input_float);


  ausgabe(root, input_float);

  return 0;
}
