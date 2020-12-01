

#include <stdio.h>




// Versuch die Variablen zu vertauschen
void swap1(int a, int b)
{
    int c = a;
    a = b;
    b = c;
}


// Vertauschen der Zeiger auf Variablen
void swap2(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}


int main(void)
{
    int x=4, y=7;
    printf("x: %d, y: %d\n", x, y);


    swap1( x, y);
    printf("x: %d, y: %d\n", x, y);

    swap2(&x, &y);
    printf("x: %d, y: %d" , x, y);


    return 0;
}
