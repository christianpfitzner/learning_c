


// std includes
#include <stdio.h>                // include for printf function


int main(void)                    // start of the main programm
{                                 // parenthesis mark the main programm
  printf("Hallo Welt!\n");        // output in the terminal of the String "Hallo Welt"

  unsigned char char_var = 0;
  printf("Value of char_var %d \n", char_var);

  char_var = 255;
  printf("Value of char_var %d \n", char_var);

  char_var = 256;
  printf("Value of char_var %d \n", char_var);

  char_var = 257;
  printf("Value of char_var %d \n", char_var);

  return 0;                       // terminate the programm and return an integer with the value 0
}
