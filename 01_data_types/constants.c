

// std includes
#include <stdio.h>                // include for printf function


int g_integer_var         = 0; 
const g_const_integer_var = 10; 


int main(void)                  
{                         
  int a               = 1;      // normal declaration and initialzation of a variable
  g_integer_var       = a;      // setting the value for a global variable is fine
  g_const_integer_var = a;      // !!! compiler error 

  return 0;                       
}