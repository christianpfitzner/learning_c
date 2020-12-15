



#include <stdio.h>




int main(void)
{
  int a = 3;
  int b = 2;

  int *p1 = &a;
  int *p2 = &b;

  printf("%p\n", p1);
  printf("%p\n", p2);

  printf("%d\n", *p1);      //
  printf("%d\n", *p2);      //

  p1 = p2;
  printf("%d\n", *p1**p2);  //

  a = 1;
  (p1)++;

  printf("%p\n",  p1);      //
  (p1)++;
  printf("%p\n",  p1);      //

  printf("%d\n", *p1);      //

  *p1 = *p2;

  printf("%d\n", a);        //
  printf("%d\n", b++);      //
  printf("%d\n", *p1);      //
  printf("%d\n", *p2);      //

  return 0;
}
