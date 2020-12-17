#include <stdio.h>




int main(void)
{
  int a = 10;


  {
    a = 20;
    {
      a = 30;
    }
  }



  return 0;
}
