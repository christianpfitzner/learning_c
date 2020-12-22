#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
   char *pointer;

   while(pointer = malloc(10)) 
   {
      // ueberpruefung, ob speicher reserviert werden konnte
      if(NULL == pointer) 
      {
         fprintf(stderr, "Speicherplatzmangel!!\n");
         return EXIT_FAILURE;
      }
      /* Tu was mit dem reservierten Speicher. */
   }
   return 0;
}