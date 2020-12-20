


#include <stdio.h>
#include <string.h>

typedef char * String;


int main(void)
{
  char text[80];
  printf("Name (Alter): ");
  fgets(text, 80, stdin);

  String s = text; // Hilfszeiger

  while (*s != '\n' && !isdigit(*s))
  {
    s++;
  }

  printf("Alter : %d", atoi(s));

  int b = 10;
  int *  a = &b;

  return 0;
}
