

#include <stdio.h>
#define MAX ('z' - 'a' + 1) // Anzahl der Buchstaben


int main(void)
{
    char alphabet[MAX];

    for (int i = 0; i < MAX; i++)
    {
        alphabet[i] = 'a' + i;
        printf("%c ", alphabet[i]);
    }

    return 0;
}

