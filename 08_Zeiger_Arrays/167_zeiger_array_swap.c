


#include <stdio.h>


void swap(char **s, char **t) {
    char *h = *s;   // Anlegen einer Hilfsvariable
    *s = *t;
    *t = h;
}


int main(void)
{
    char *a = "otto", *b = "motor";
    printf("%s%s\n", a, b);
    swap(&a, &b);
    printf("%s%s" , a, b);
    return 0;
}
