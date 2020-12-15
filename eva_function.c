

#include <stdio.h>




int readNumberFromTerminal(void)
{
    int input_number = 0;

    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &input_number);

    return input_number;
}


int addTwoNumbers(int numberOne, int numberTwo)
{
    return numberOne + numberTwo;
}

void printStars(void)
{
    printf("**********************************************\n");
}


void presentResultInTerminal(int result)
{
    printStars();
    printf("Das Ergebnis der Addition ist %d\n", result);
    printStars();
}


int main(void)
{
    // EINGABE
    printStars();
    printf("Das Programm liest zwei Zahlen ein und Berechnet die Summe\n");
    printStars();

    const int number1 = readNumberFromTerminal();
    const int number2 = readNumberFromTerminal();

    // VERARBEITUNG
    const int sum     = addTwoNumbers(number1, number2);

    // AUSGABE
    presentResultInTerminal(sum);

    return 0;
}
