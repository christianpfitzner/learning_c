#include <stdio.h>
#include <stdlib.h>



int main(void)
{
   char *pointer;

   while(pointer = malloc(1))
   {
      // ueberpruefung, ob speicher reserviert werden konnte
      if(NULL == pointer)
      {
         fprintf(stderr, "Speicherplatzmangel!!\n");
         return EXIT_FAILURE;
      }
      free(pointer);
      /* Tu was mit dem reservierten Speicher. */
   }
   return 0;
}


// the following programming part cases a big memory issue
// while free is never called
// First the RAM will be written with 100 percent;
// Next the hard drive will start swapping.

//int main(void)
//{
//   while(1)
//   {
//      char *pointer = malloc(1);
//   }
//   return 0;
//}
