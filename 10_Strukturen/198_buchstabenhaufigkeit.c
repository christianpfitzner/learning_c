


#include <stdio.h>
#include <ctype.h>
#include <string.h>


typedef struct
{
  char letter;
  int frequency;
} Letter;




int main(void)
{
  printf("Das Programm zaehlt die Anzahl unterschiedlicher Buchstaben in einem Text:  \n");

  char eingabe[80];
  fgets(eingabe, 80, stdin);
  printf("\n\n");

  Letter buchstabenliste[26];

  // initialize buchstabenliste
  for(unsigned int i=0 ; i<26 ; i++)
  {
    buchstabenliste[i].letter    = (int)('a') + i;
    buchstabenliste[i].frequency = 0;
  }


  for(unsigned int i=0 ; i<strlen(eingabe) ; i++)
  {
    const char single_letter = tolower(eingabe[i]);

    for(unsigned int j=0 ; j<26 ; j++)
    {
      if(single_letter == buchstabenliste[j].letter)
      {
        buchstabenliste[j].frequency++;
      }

    }
  }

  // print the frequency of each letter from the test
  for(unsigned int i=0 ; i<26 ; i++)
  {
    if(buchstabenliste[i].frequency > 0)
    {
      printf("%c: %d \n", buchstabenliste[i].letter, buchstabenliste[i].frequency);
    }
  }


  return 0 ;
}
