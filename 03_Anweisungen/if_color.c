


#include <stdio.h>


int main(void)
{
  char c;

  printf("Colour: ");
  scanf("%c", &c);

//  if (c == 'r')
//    printf("red");
//  else
//    if (c == 'g')
//      printf("green");
//    else
//      if (c == 'b')
//        printf("blue");
//      else
//        printf("illegal");
//
//
//  if(c == 'r')
//    printf("red");
//
//  if(c == 'b')
//    printf("blue");
//
//  if(c == 'g')
//    printf("green");
//
//  if(c != 'r' || !(c == 'b') || !(c == 'g'))
//    printf("illegal");

  if (c == 'r')
    printf("red");
  else if (c == 'g')
    printf("green");
  else if (c == 'b')
    printf("blue");
  else
    printf("illegal");

  return 0;
}
