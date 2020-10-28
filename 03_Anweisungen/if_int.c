

#include <stdio.h>



int main(void)
{

  // introduction text
  printf("Easy example for if\n");
  printf("Enter an integer number, and we check if the number can be divided by 2\n");
  printf("Your number: ");


  // get input from the user via cli
  int input_integer = 0;
  scanf("%d", &input_integer);
  printf("Your number is %d\n", input_integer);


  // distinguishe with the modulo operator if the
  // number can be divided by 2
  if((input_integer%2) == 0)
  {
    printf("Number can be divided by 2\n");
  }
  else
  {
    printf("Number can not be divided by 2\n");
  }


  return 0;
}
