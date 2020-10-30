
#include <stdio.h>
#include <math.h>

int main(void)
{
  // einlesen einer Variablen
  float input_float = 0.0; ;
  printf("Dieses Programm berechnet die Wurzel einer Zahl\n");
  printf("Bitte geben Sie eine positive Gleitkommazahl ein: ");
  scanf("%f", &input_float);

  // berechnung der Wurzel der Variablen
  const float root = sqrt(input_float);

  // Ausgabe an den Benutzer
  printf("Die Quadratwurzel von %f ist %f", input_float, root);

  return 0;
}
