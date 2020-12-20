



#include <string.h>
#include <stdio.h>

int main(void)
{
   char str[80] = "Das ist ein strtok-Beispiel. Das ist ein zweiter Satz.";
   const char s[] = ".";   //
   char *token;

   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while( token != NULL ) {
      printf( " %s\n", token );

      token = strtok(NULL, s);
   }


  return 0;
}
