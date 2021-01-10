


#include <stdio.h>

typedef char * String;


void swap(String *s, String *t) {
    String h = *s;   // Anlegen einer Hilfsvariable
    *s = *t;
    *t = h;
}



int main(void)
{
    String a = "otto";
    String b = "motor";
    printf("%s%s\n", a, b);
    swap(&a, &b);
    printf("%s%s" , a, b);
    return 0;
}
