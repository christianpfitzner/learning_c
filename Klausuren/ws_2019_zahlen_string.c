#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int zahlensumme(char *text)
{
     unsigned int summe = 0;
     unsigned int i     = 0;

     while (text[i] != '\0')
     {
         while (text[i] != '\0' && !isdigit(text[i]))
         {
            i++;
         }

         int zahl = 0;

         while (text[i] != '\0' && isdigit(text[i]))
         {

             zahl = zahl * 10 + text[i] - '0';
             i++;
         }

         summe += zahl;
     }
     return summe;
}



int main(void)
{
     char *text = "Labor G003 in 85049 Ingolstadt, Esplanade 10";

     printf("Text: \"%s\"\n", text);
     printf("Summe aller Zahlen = %d\n", zahlensumme(text));
     return 0;
}
