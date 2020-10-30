
#include <stdio.h>
#include <math.h>

int main(void)
{


  float input_float = 0.0; ;
  printf("Dieses Programm berechnet die Wurzel einer Zahl\n");
  printf("Bitte geben Sie eine positive Gleitkommazahl ein: ");
  scanf("%f", &input_float);

  float squared = sqrt(input_float);
  printf("Die Quadratwurzel von %f ist %f", input_float, squared);

  return 0;
}
