

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(void)
{
    char string[] = "Hallo Welt 1235";
    printf("%s\n", string);

    unsigned int nr_of_upperletters = 0;
    unsigned int nr_of_numbers      = 0;
    unsigned int quersumme = 0;

    for(unsigned int i=0 ; i<strlen(string) ; i++)
    {
        if(isdigit(string[i]))
        {
            printf("%d\n", atoi(&string[i]));
            quersumme += atoi(&string[i]);

        }
        nr_of_upperletters += isupper(string[i]);
        nr_of_numbers      += isdigit(string[i]);
        string[i] = toupper(string[i]);
    }

    printf("%d\n\n", quersumme);
    printf("%s\n", string);
    printf("Anzahl an Grossbuchstaben: %d\n", nr_of_upperletters);
    printf("Anzahl an Ziffern:         %d\n", nr_of_numbers);

    return 0;
}
