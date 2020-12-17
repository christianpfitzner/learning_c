#include <stdio.h>


int main(void)
{
  int a = 0;
  if (a != 0)
  {
    if (a == 1)
      a = 2;
  }
  else
  {
    a = 3;
  }


  printf("%d", a);

  return 0;
}
