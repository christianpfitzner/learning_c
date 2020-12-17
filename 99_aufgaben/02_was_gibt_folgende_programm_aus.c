#include <stdio.h>


int main(void)
{

  int b = 2;
  int a = 3;


  int *p1 = &a;
  int *p2 = &b;

  printf("%p\n", p1);       // 0062ff14
  printf("%p\n", p2);       // 0062ff10

  printf("%d\n", *p1);      //

  printf("%d\n", *p2);      //

  p1 = p2;                      // p1 hat 0062ff10
  printf("%d\n", *p1**p2);  //

  a = 1;
  ++(p1);                   // 0062ff11

  printf("%p\n",  p1);      //


  printf("%d\n", *p1);      //

  *p1 = *p2;

  printf("%d\n", a);        //

  printf("%d\n", b++);      //

  printf("%d\n", *p1);      //
  printf("%d\n", *p2);      //


  return 0;
}
