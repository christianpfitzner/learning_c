


#include <stdio.h>


int main(void)
{
  int a = 10;
  int b = 5;

  a += b;               // entspricht a = a + b;
  printf("%d\n", a);

  a -= b;               // entspricht a = a - b;
  printf("%d\n", a);

  a *= b;               // entspricht a = a * b;
  printf("%d\n", a);

  a /= b;               // entspricht a = a / b;
  printf("%d\n", a);

  a %= b;               // entspricht a = a % b;
  printf("%d\n", a);

  return 0;
}
