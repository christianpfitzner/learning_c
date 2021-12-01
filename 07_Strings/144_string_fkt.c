/**************************************************************
* 144_string_fkt.c
***************************************************************
* author: Prof. Dr. Christian Pfitzner
* date: 2021-12-01
***************************************************************
* Grundlegendes Deklarieren und Initialisieren von Strings.
*
* Siehe Folie 144 im Skript
**************************************************************/

#include <stdio.h>
#include <string.h>



int main(void)
{
  char string1[50];
  char string2[50];

  printf("Eingabe 1. String: \n");
  printf("Geben Sie eine E-Mailadresse ein\n");

  // parameters of the fgets function
  // str    − This is the pointer to an array of chars where the string read is stored.
  // n      − This is the maximum number of characters to be read (including the final null-character). Usually, the length of the array passed as str is used.
  // stream − This is the pointer to a FILE object that identifies the stream where characters are read from.
  fgets(string1, 50, stdin);

  char *addr = strchr(string1, '@');  // 10/20 + 20/10
  if(addr == NULL)
  {
      printf("Keine gueltige E-Mail angegeben. ");
  }


//  printf("\nEingabe 2. String: ");
//  fgets(string2, 50, stdin);
//
//
//  unsigned int unterschiede = strcmp (string1, string2);

//  printf("Die Beiden Strings unterscheiden sich in %d Zeichen\n", unterschiede);


  return 0;
}
