#include <stdio.h>
#include <string.h>
#include <stdbool.h>



typedef char * String;


bool ist_palindrom(String s)
{
  // Ist s ein Palindrom?
  for (unsigned int i = 0; i < strlen(s) / 2; i++)
  {
    if (s[i] != s[strlen(s) - i - 1])
    {
      return false;
    }
  }

  return true;
}
int main(void)
{
  String s1 = "otto", s2 = "oslo";
  printf("%s: %d\n", s1, ist_palindrom(s1));
  printf("%s: %d\n", s2, ist_palindrom(s2));
  return 0;
  }
