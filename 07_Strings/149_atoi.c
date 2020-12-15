


#include <stdio.h>
#include <string.h>




int main(void)
{
  char text[80];
  printf("Name (Alter): ");
  fgets(text, 80, stdin);
  char *s = text; // Hilfszeiger

  while (*s != '\n' && !isdigit(*s))
    s++;

  printf("Alter : %d", atoi(s));




  return 0;
}
