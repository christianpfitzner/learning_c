#include <stdio.h>



int main(void)
{

  int a = 5, b = 5, c = 5, d = 5;
  printf("%d ", a); printf("%d ", a++);  printf("%d\n", a);
  printf("%d ", b); printf("%d ", b+=1); printf("%d\n", b);
  printf("%d ", b); printf("%d ", ++b); printf("%d\n", b);


  printf("%d ", c); printf("%d ", c--); printf("%d\n", c);
  printf("%d ", d); printf("%d ", --d); printf("%d\n", d);

  // for schleifen !!

  return 0;
}
