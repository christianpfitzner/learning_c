

#include <stdio.h>


// Funktion zum Einlesen einer Int-Zahl vom Terminal
// return int the result from the user input
int readIntFromCommandLine(void)
{
  int input_number = 0;

  printf("Geben Sie eine Zahl an: ");
  scanf("%d", &input_number);

  return input_number;
}


// Function to add two numbers
// Input parameters:
//   firstNubmer:    1. Number to be added
//   secondNumber:   2. Number to be added
// Output parameters:
//   result from addition
int addTwoNumbers(int firstNumber, int secondNumber)
{
  return firstNumber + secondNumber;
}




// Funktion to provide output in the command line
void printAdditionToCommandLine(int result)
{
  printf("Das Ergebnis der Addition ist %d", result);     // Ausgabe im Terminal
  return;
}



int main(void)
{
  printf("Dieses Programm addiert zwei Zahlen\n");

  // getting two numbers form the command line
  const int number1 = readIntFromCommandLine();
  const int number2 = readIntFromCommandLine();

  // calculating the result
  const int result  = addTwoNumbers(number1, number2);

  // output to the user
  printAdditionToCommandLine(result);

  return 0;
}
